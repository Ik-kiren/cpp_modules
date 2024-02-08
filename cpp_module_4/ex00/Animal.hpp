#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:

    std::string type;

public:

    Animal(void);
    ~Animal(void);

    std::string getType(void) const;

    virtual void makeSound(void) const;
};

class WrongAnimal
{
protected:

    std::string type;

public:

    WrongAnimal(void);
    ~WrongAnimal(void);

    std::string getType(void) const;

    virtual void makeSound(void) const;
};

#endif