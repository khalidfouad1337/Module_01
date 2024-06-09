/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:57:53 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/09 20:08:00 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}