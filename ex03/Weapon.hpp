/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:34:08 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/08 19:47:52 by kfouad           ###   ########.fr       */
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
    std::string weapon(std::string type);
    std::string getType();
    void setType(std::string str);
};

#endif