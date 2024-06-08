/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:37:56 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/01 14:34:18 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string.h>

int main()
{
    Zombie *z = newZombie("zmb1");
    z->announce();
    delete z;
    randomChump("zmb2");
    Zombie Zombie("zmb3");
    Zombie.announce();
    return 0;
}