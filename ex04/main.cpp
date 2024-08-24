/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:27:30 by kfouad            #+#    #+#             */
/*   Updated: 2024/08/24 18:40:18 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string.h>

int ft_replace(std::string line, std::string file, std::string s1, std::string s2)
{
    std::string tmp;
    size_t found;
    int i;

    tmp = line;
    found = tmp.find(s1);
    i = 0;

    while(found != std::string::npos)
    {
        i = i + found;
        line.erase(i, s1.length());
        line.insert(i, s2);
        i = i + s2.length();
        tmp = line.substr(i);
        found = tmp.find(s1);
    }
    std::ofstream outfile;
    outfile.open(file + ".replace");
    if(!outfile)
    {
        std::cerr << "Unable to open file for reading" << std::endl;
        return (1);
    }
    outfile << line;
    outfile.close();
    return (0);
}

int get_data_file(std::string file, std::string s1, std::string s2)
{
    int ret;
    std::ifstream infile;
    infile.open(file);
    if (!infile)
    {
        std::cerr << "Unable to open file for reading" << std::endl;
        return (1);
    }
    std::string line;
    getline(infile, line, '\0');
    ret = ft_replace(line, file, s1, s2);
    infile.close();
    return (ret);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Please entre three parameters [filename and two strings]" << std::endl;
        return (1);
    }
    else
        get_data_file(av[1], av[2], av[3]);
    return (0);
}