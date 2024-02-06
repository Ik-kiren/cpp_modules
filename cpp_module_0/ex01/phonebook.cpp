#include "phonebook.hpp"

Phonebook::Phonebook()
{
    last_add = 0;
}

void Phonebook::addContact()
{   
    std::cout << "what's the first name: ";
    contact[last_add].first_name = contact[last_add].addInfo();
    std::cout << "what's the last name: ";
    contact[last_add].last_name = contact[last_add].addInfo();
    std::cout << "what's the nickname: ";
    contact[last_add].nickname = contact[last_add].addInfo();
    std::cout << "what's the phone number: ";
    contact[last_add].phone_number = contact[last_add].addNumber();
    std::cout << "what's the darkest_secret: ";
    contact[last_add].darkest_secret = contact[last_add].addInfo();
    if (last_add == 7)
        last_add = 0;
    else
        last_add++;
}


std::string Phonebook::infoLen(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Phonebook::searchContact()
{
    std::string line;
    int index;
    bool loop = false;

    if (contact[0].first_name.empty())
    {
        std::cout << "no contact registered yet" << std::endl;
        return ;
    }
    for (int i = 0; i < 8; i++)
    {
        if (contact[i].first_name.empty())
            break;
        std::cout << i << " | " << std::setw(10)  << infoLen(contact[i].first_name) << " | " << std::setw(10) << infoLen(contact[i].last_name) << std::endl;
    }
    do
    {
        std::cout << "Please enter the contact index: " << std::flush << std::endl;
        std::cin >> index;
        if (std::cin.good() && (index >= 0 && index <= 7) && !contact[index].first_name.empty()) {
            loop = true;
        } else {
            std::cin.clear();
            //std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid index; please re-enter." << std::endl;
        }
    }while (!loop);
    contact[index].displayInfo();
    std::cout << std::endl;
}

void Phonebook::help()
{
    std::cout << "command list :" << std::endl;
    std::cout << "ADD : allow to register a new contact !" << std::endl;
    std::cout << "SEARCH : allow to search for a registered contact" << std::endl;
}