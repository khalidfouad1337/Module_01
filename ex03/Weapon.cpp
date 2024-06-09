/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:40:43 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/09 20:08:23 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type)
{
    this->type = type;
}

std::string Weapon::getType()
{
    return this->type;    
}

void Weapon::setType(std::string str)
{
    this->type = str;
}

Weapon::~Weapon()
{
}