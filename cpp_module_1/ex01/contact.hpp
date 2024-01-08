#include <iostream>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    int phone_number;
    std::string darkest_secret;
    int time_added;
    Contact(std::string first_name, std::string last_name, std::string nickname, int phone_number);
};