/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:53:55 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/09 20:07:22 by khalid           ###   ########.fr       */
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
        Weapon *weapon;
    public :
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &weapon);
        ~HumanB();
};
#endif