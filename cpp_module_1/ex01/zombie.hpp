#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        ~Zombie();
        void setName(std::string name);
        void announce();
};

Zombie* zombieHorde(int n, std::string name);