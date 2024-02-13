#include "Zombie.hpp"

int main()
{
    std::string str;

    std::cout << "zombie1 name : ";
    std::cin >> str;
    Zombie zombie1(str);

    std::cout << "zombie2 name : ";
    std::cin >> str;
    Zombie* zombie2 = newZombie(str);
    zombie2->announce();
    delete zombie2;

    std::cout << "randomchump name : ";
    std::cin >> str;
    randomChump(str);
}