#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   pb;
    while (1 > 0)
    {
        std::string arg;

        std::cout << "PhoneBook: ";
        if (!std::getline(std::cin, arg))
            break ;
        if (arg == "ADD")
            pb.AddContact(); 
        else if (arg == "SEARCH")
            pb.SearchContact();
        else if (arg == "EXIT")
            return (std::cout << "EXIT", 0);
    }
    return (0);
}