#include "zombie.hpp"
#include <cstdlib>

int main()
{
    
    std::string str;
    std::string n;
    bool        loop = false;

    std::cout << "zombies numbers : ";
    do
    {
        getline(std::cin, n);
        if (n.find_first_not_of("0123456789") == std::string::npos && atoi(n.c_str()) > 0)
            loop = true;
        else
            std::cout << "not a number retry: ";
    } while (!loop);
    
    std::cout << "zombies name : ";
    std::cin >> str;
    
    Zombie *zombies = zombieHorde(atoi(n.c_str()), str);
    for (int i = 0; i < atoi(n.c_str()); i++)
    {
       zombies[i].announce();
    }
    delete [] zombies;
}