#include <iostream>
#include <iomanip>

class Contact
{
    public:
    
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

        Contact();
        ~Contact();

        std::string addInfo();
        std::string addNumber();
        void displayInfo();
};