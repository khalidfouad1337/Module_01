/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:53:55 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/08 19:57:35 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon weapon;
    public :
        void attack();
};