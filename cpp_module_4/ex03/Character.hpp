#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:

    std::string name;
    AMateria *inv[4];
    static AMateria *ground[50];

public:
    Character(const std::string _name);
    Character(const Character &character);
    ~Character(void);

    Character &operator=(Character const &rhs);

    virtual const std::string &getName(void) const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
};

#endif