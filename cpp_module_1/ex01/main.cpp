#include "zombie.hpp"

int main()
{
    
    std::string str;
    std::string n;
    bool        loop = false;

    std::cout << "zombies numbers : ";
    //std::cin >> n;
    do
    {
        getline(std::cin, n);
        try
        {
            int t = std::stoi(n);
        }
        catch(std::invalid_argument& e)
        {
            std::cout << "not a number retry: ";
            continue ;
        }
        catch(std::out_of_range& e)
        {
            std::cout << "out of range retry: ";
            continue ;
        }
        if (n.find_first_not_of("0123456789") == std::string::npos && std::stoi(n) > 0)
            loop = true;
        else
            std::cout << "not a number retry: ";
    } while (!loop);
    
    std::cout << "zombies name : ";
    std::cin >> str;
    
    Zombie *zombies = zombieHorde(std::stoi(n), str);
    for (int i = 0; i < std::stoi(n); i++)
    {
       zombies[i].announce();
    }
    delete [] zombies;
}