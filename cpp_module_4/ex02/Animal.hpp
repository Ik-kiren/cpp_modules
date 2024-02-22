#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:

    std::string type;

public:

    Animal(void);
    Animal(const Animal &animal);
    virtual ~Animal(void) = 0;

    Animal &operator=(const Animal &src);

    std::string getType(void) const;

    virtual void makeSound(void) const;
};

#endif