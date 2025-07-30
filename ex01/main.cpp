/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bullestico <bullestico@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:58:40 by bullestico        #+#    #+#             */
/*   Updated: 2025/07/30 20:24:23 by bullestico       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    signal(SIGQUIT, SIG_IGN);
    while (true)
    {
        string arg;

        cout << "PhoneBook: ";
        cin >> arg;
        if (arg.compare("ADD") == 0)
            cout << "adding contact\n";
        else if (arg.compare("SEARCH") == 0)
            cout << "searching for contact\n";
        else if (arg.compare("EXIT\n") == 0)
            return (cout << "EXIT", 0);
        else
            cout << "Wrong commands: " << arg << "\n";
    }
    return (0);
}