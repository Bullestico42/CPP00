#include "Contact.hpp"

int main(void)
{
    while (1 > 0)
    {
        std::string arg;

        std::cout << "PhoneBook: ";
        if (!(std::cin >> arg))
            break ;
        if (arg == "ADD")
            Contact newContact = Contact::setContact();
        else if (arg == "SEARCH")
            std::cout << "searching for contact" << std::endl;
        else if (arg == "EXIT")
            return (std::cout << "EXIT", 0);
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}