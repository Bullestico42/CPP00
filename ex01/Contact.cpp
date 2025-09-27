
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

bool    Contact::setContact()
{
    std::string fn;
    std::string ln;
    std::string ds;
    std::string nn;
    std::string pn;
    int         state;

    state = 0;

    std::cout << "Creating new contact..." << std::endl;
    std::cout << "first name: ";
    std::getline(std::cin, fn);
    if (fn.size() == 0) state = 1;
    std::cout << "last name: ";
    std::getline(std::cin, ln); 
    if (ln.size() == 0) state = 1;
    std::cout << "nickname: ";
    std::getline(std::cin, nn);
    if (nn.size() == 0) state = 1;
    std::cout << "darkest secret: ";
    std::getline(std::cin, ds);
    if (ds.size() == 0) state = 1;
    std::cout << "phone number: ";
    std::getline(std::cin, pn);
    if (pn.size() == 0) state = 1;
    else
    if (state > 0)
    {
        std::cout << "Case cannot be empty !" << std::endl;
        return false;
    }
    else if (std::all_of(pn.begin(), pn.end(), ::isalpha))
    {
        std::cout << "Phone number needs to be a number !" << std::endl;
        return false;
    }
    this->setFirstName(fn);
    this->setLastName(ln);
    this->setNickName(nn);
    this->setDarkestSecret(ds);
    this->setPhoneNumber(pn);
    std::cout << "Contact created succesfully" << std::endl;
    return true;
}