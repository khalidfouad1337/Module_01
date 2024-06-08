/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:53:52 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/01 12:37:10 by kfouad           ###   ########.fr       */
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
        Zombie(std::string name);
        void announce( void );
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif