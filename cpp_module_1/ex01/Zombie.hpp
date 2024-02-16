#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(void);
        ~Zombie(void);
        std::string getName(void) const;
        void setName(std::string name);
        void announce();
};

Zombie* zombieHorde(int n, std::string name);

#endif