#include "contact.hpp"

std::string Contact::addInfo()
{
    std::string line;
    bool loop = false;

    do
    {
        getline(std::cin, line);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            exit(EXIT_SUCCESS);
        }
        if(line.empty())
        {
            std::cout << "retry : ";
        }
        else
            loop = true;
    }while (!loop);
    return line;
}

std::string Contact::addNumber()
{
    std::string line;
    bool loop = false;

    do
    {
        getline(std::cin, line);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            exit(EXIT_SUCCESS);
        }
        if(line.empty() || line.find_first_not_of("0123456789") != std::string::npos)
            std::cout << "retry : ";
        else
            loop = true;
    }while (!loop);
    return line;
}

void Contact::displayInfo()
{
    std::cout << "first name : " << first_name << std::endl;
    std::cout << "last name : " << last_name << std::endl;
    std::cout << "nickname : " << nickname << std::endl;
    std::cout << "phone_number : " << phone_number << std::endl;
    std::cout << "darkest secret : " << darkest_secret << std::endl;
}
