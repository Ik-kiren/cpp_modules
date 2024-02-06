#include "contact.hpp"
#include <limits>

class Phonebook
{
    public:
        Contact contact[8];
        int last_add;

        Phonebook();

        void addContact();
        std::string infoLen(std::string str);
        void searchContact();
        void help();
};