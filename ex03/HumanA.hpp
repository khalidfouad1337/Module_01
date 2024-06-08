/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:49:39 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/08 19:57:45 by kfouad           ###   ########.fr       */
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
        Weapon weapon;
    public :
        void attack();
};