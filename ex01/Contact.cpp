#include <algorithm>
#include <cctype>
#include "Contact.hpp"

Contact::Contact()
{
	_FirstName = "";
	_LastName = "";
}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name,
		std::string phone_number, std::string darkest_secret)
{
	_FirstName = first_name;
	_LastName = last_name;
	_NickName = nick_name;
	_PhoneNumber = phone_number;
	_DarkestSecret = darkest_secret;
}

Contact::~Contact()
{

}

std::string Contact::getFirstName()
{
    return (_FirstName);
}

void    Contact::setFirstName(std::string FirstNameTemp)
{
    _FirstName = FirstNameTemp;
}

std::string Contact::getLastName()
{
    return (_LastName);
}

void    Contact::setLastName(std::string LastNameTemp)
{
    _LastName = LastNameTemp;
}

std::string Contact::getNickName()
{
    return (_NickName);
}

void    Contact::setNickName(std::string NickNameTemp)
{
    _NickName = NickNameTemp;
}

std::string Contact::getDarkestSecret()
{
    return (_DarkestSecret);
}

void    Contact::setDarkestSecret(std::string DarkestSecretTemp)
{
    _DarkestSecret = DarkestSecretTemp;
}

std::string Contact::getPhoneNumber()
{
    return (_PhoneNumber);
}

void    Contact::setPhoneNumber(std::string PhoneNumberTemp)
{
    _PhoneNumber = PhoneNumberTemp;
}

Contact    Contact::setContact()
{
    Contact     User;
    std::string fn;
    std::string ln;
    std::string ds;
    std::string nn;
    std::string pn;
    int         state;

    state = 0;

    std::cout << std::endl << "first name: ";
    if (!(std::cin >> fn))
        exit (0);
    else if (fn.size() == 0) state = 1;
    else
        User.setFirstName(fn);

    std::cout  << std::endl << "last name: ";
    if (!(std::cin >> ln))
        exit (0);
    else if (ln.size() == 0) state = 1;
    else
        User.setLastName(ln);

    std::cout << std::endl << "nickname: ";
    if (!(std::cin >> nn))
        exit (0);
    else if (nn.size() == 0) state = 1;
    else
        User.setNickName(nn);

    std::cout << std::endl << "darkest secret: ";
    if (!(std::cin >> ds))
        exit (0);
    else if (ds.size() == 0) state = 1;
    else
        User.setDarkestSecret(ds);

    std::cout << std::endl << "phone number: ";
    if (!(std::cin >> pn))
        exit (0);
    else if (pn.size() == 0) state = 1;
    else
        User.setPhoneNumber(pn);

    if (state > 0)
    {
        std::cout << "Case cannot be empty !" << std::endl;
        return (User);
        //return (setPhoneBook(User, state));
    }
    else if (!std::all_of(pn.begin(), pn.end(), ::isalpha))
    {
        std::cout << "Phone number needs to be a number !" << std::endl;
        return (User);
        //return (setPhoneBook(User, state));
    }
    return (User);
    //return (setPhoneBook(User, state));
}