#include "Character.hpp"

AMateria *Character::ground[50];

Character::Character(const std::string _name) : name(_name)
{
    for (int i = 0; i < 4; i++)
    {
        this->inv[i] = NULL;
    }
    std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &character) : name(character.name)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inv[i] != NULL)
        {
            delete this->inv[i];
            this->inv[i] = NULL;
        }
        if (character.inv[i] != NULL)
        {
            this->inv[i] = character.inv[i]->clone();
        }
    }
    std::cout << "Character constructor called" << std::endl;
}
Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inv[i] != NULL)
            delete this->inv[i];
    }

    for (size_t i = 0; i < 50; i++)
    {
        if (this->ground[i] != NULL)
        {
            delete this->ground[i];
            this->ground[i] = NULL;
        }
    }
    
    std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(Character const &rhs)
{
    std::cout << "WTF\n";
    this->name = rhs.name;
    for (size_t i = 0; i < 4; i++)
    {
        if (this->inv[i] != NULL)
        {
            delete this->inv[i];
            this->inv[i] = NULL;
        }
        if (rhs.inv[i])
        {
            this->inv[i] = rhs.inv[i]->clone();
        }
    }
    return *this;
}


const std::string &Character::getName(void) const
{
    return this->name;
}


void Character::equip(AMateria *m)
{
    for (size_t i = 0; i < 50; i++)
    {
        if (ground[i] == m)
        {
            ground[i] = NULL;
        }
    }
    
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
    if (idx < 0 || idx > 4)
        return ;
    for (size_t i = 0; i < 50; i++)
    {
        if (ground[i] == inv[idx])
        {
            this->inv[idx] = NULL;
            return ;
        }
    }

    for (size_t i = 0; i < 50; i++)
    {
        if (!ground[i])
        {
            ground[i] = inv[idx];
            break ;
        }
    }
    this->inv[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 4)
        return ;
    if (this->inv[idx])
    {
        this->inv[idx]->use(target);
    }
    else
        std::cout << "no materia slot " << idx << " found" << std::endl;
    return ;
}