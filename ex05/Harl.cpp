/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 21:25:17 by kfouad            #+#    #+#             */
/*   Updated: 2024/08/24 22:33:40 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug( void )
{
    std::cout << "DEBUG : " 
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
};

void Harl::info( void )
{
    std::cout << "INFO : " 
    << " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! " << std::endl;
};

void Harl::warning(void)
{
    std::cout << "WARNING : " 
    << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error(void)
{
    std::cout << "ERROR : " << "This is unacceptable! I want to speak to the manager now." << std::endl;    
};

void Harl::complain(std::string level)
{
    void (Harl::*memberFunctions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string actions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < 4; i++)
    {
        if (level == actions[i])
        {
            (this->*memberFunctions[i])();
            break;
        }
    }
}