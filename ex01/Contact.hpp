#include <iostream>
#include <string>
using namespace std;

class Contact
{
    private:
        string  FirstName;
        string  LastName;
        string  DarkestSecret;
        int     PhoneNumber;
    public:
        string getFirstName();
        void setFirstName(string FirstNameTemp);
        string getLastName();
        void setLastName(string LastNameTemp);
        string getDarkestSecret();
        void setDarkestSecret(string DarkestSecretTemp);
        int getPhoneNumber();
        void setPhoneNumber(int PhoneNumberTemp);
        void setContact();
};

string Contact::getFirstName()
{
    return (FirstName);
}

void    Contact::setFirstName(string FirstNameTemp)
{
    FirstName = FirstNameTemp;
}

string Contact::getLastName()
{
    return (LastName);
}

void    Contact::setLastName(string LastNameTemp)
{
    LastName = LastNameTemp;
}

string Contact::getDarkestSecret()
{
    return (DarkestSecret);
}

void    Contact::setDarkestSecret(string DarkestSecretTemp)
{
    DarkestSecret = DarkestSecretTemp;
}

int Contact::getPhoneNumber()
{
    return (PhoneNumber);
}

void    Contact::setPhoneNumber(int PhoneNumberTemp)
{
    PhoneNumber = PhoneNumberTemp;
}

