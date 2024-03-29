#include "Phonebook.hpp"

int main()
{
    Phonebook book;
    std::string line;

    std::cout << "Welcome to the Awesome Phonebook" << std::endl;
    std::cout << "use the commands : \nADD\nSEARCH\nHELP" << std::endl;
    while (line != "exit")
    {
        std::cout << "command : ";
        std::getline(std::cin, line);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            exit(EXIT_SUCCESS);
        }
        if (line == "add" || line == "ADD")
            book.addContact();
        else if (line == "search" || line == "SEARCH")
            book.searchContact();
        else if (line == "help" || line == "HELP")
            book.help();
    }
}