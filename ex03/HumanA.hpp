/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:49:39 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/09 20:07:51 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include<iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon& weapon;
        HumanA();
    public :
        HumanA(std::string name, Weapon& weapon);
        void attack();
        ~HumanA();
};

#endif