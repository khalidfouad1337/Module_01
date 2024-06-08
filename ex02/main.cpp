/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:43:35 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/08 16:43:46 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Address of string variable: " << &brain << std::endl;
    std::cout << "Address held by pointer: " << stringPTR << std::endl;
    std::cout << "Address held by reference: " << &stringREF << std::endl;

    std::cout << "Value of string variable: " << brain << std::endl;
    std::cout << "Value pointed to by pointer: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by reference: " << stringREF << std::endl;

    return 0;
}