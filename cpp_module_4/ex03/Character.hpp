#ifndef CHARACTER_HPP
# define CHARATER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:

    const std::string name;
    AMateria *inv[4];

public:
    Character(const std::string _name);
    Character(const Character &character);
    ~Character(void);

    virtual const std::string &getName(void) const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
};

#endif