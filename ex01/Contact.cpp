/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bullestico <bullestico@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:58:47 by bullestico        #+#    #+#             */
/*   Updated: 2025/07/30 20:06:04 by bullestico       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    setContact()
{
    Contact User;

    User.setFirstName("Francis");
    User.setLastName("Saucisse");
    User.setDarkestSecret("FrancisSaucisse");
    User.setPhoneNumber(4036899);

    std::cout << "Name: " << User.getFirstName() << "\n" << "Last Name: " << User.getLastName() << "\n"
                << "Darkest Secret: " << User.getDarkestSecret() << "\n" << "Phone Number: "
                << User.getPhoneNumber() << "\n";
    return ;
}