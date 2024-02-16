#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;

    public:
        HumanB(std::string _name);
        ~HumanB();
        void setWeapon(Weapon &Weapon);
        void attack();
};

#endif