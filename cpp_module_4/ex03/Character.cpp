#include "Character.hpp"

Character::Character(const std::string _name) : name(_name)
{
    for (int i = 0; i < 4; i++)
    {
        inv[i] = NULL;
    }
    std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &character) : name(character.name)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inv[i] != NULL)
        {
            delete inv[i];
            inv[i] = NULL;
        }
        if (character.inv[i] != NULL)
        {
            *(this->inv[i]) = *(character.inv[i]);
        }
    }
    std::cout << "Character constructor called" << std::endl;
}
Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (inv[i] != NULL)
            delete inv[i];
    }
    
    std::cout << "Character destructor called" << std::endl;
}

const std::string &Character::getName(void) const
{
    return this->name;
}


void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inv[i] == NULL)
        {
            inv[i] = m;
            return ;
        }
    }
    delete m;
    return ;
}

void Character::unequip(int idx)
{
    inv[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (this->inv[idx])
    {
        this->inv[idx]->use(target);
    }
    else
        std::cout << "no materia slot " + std::to_string(idx) + " found" << std::endl;
    return ;
}