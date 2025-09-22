/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bullestico <bullestico@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:52:12 by bullestico        #+#    #+#             */
/*   Updated: 2025/08/21 18:06:36 by bullestico       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (size_t i = 0; av[i]; i++)
        for (size_t j = 0; av[i][j]; j++)
            av[i][j] = toupper(av[i][j]);
    for (size_t i = 1; av[i]; i++)
        if ((int)i >= ac - 1) std::cout << av[i];
            else
                std::cout << av[i] << " ";
    std::cout << std::endl;
    return 0;
}