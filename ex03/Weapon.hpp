/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:34:08 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/09 20:08:16 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>
#include<string.h>

class Weapon 
{
    private :
    std::string type;

    public :
    
    Weapon(std::string type);
    std::string getType();
    void setType(std::string str);
    ~Weapon();
};

#endif