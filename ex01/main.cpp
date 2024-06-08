/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:45:44 by kfouad            #+#    #+#             */
/*   Updated: 2024/06/08 16:10:26 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string.h>

int main() {
    int N = 5; // Number of zombies
    Zombie* horde = zombieHorde(N, "Zombie");

    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }

    delete [] horde; // Clean up the dynamically allocated memory
    return 0;
}
