/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:42:29 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/08 16:17:30 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <iostream>
#include <string.h>

class Zombie
{
    private:
        std::string name;
    public:
        // Zombie();
        void set_name(std::string name);
        void announce( void );
        ~Zombie();
};
Zombie* zombieHorde(int N, std::string name);

#endif