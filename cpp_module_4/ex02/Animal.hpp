#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:

    std::string type;

    Animal(void);
    Animal(const Animal &animal);

public:

    virtual ~Animal(void) = 0;

    Animal &operator=(const Animal &src);

    std::string getType(void) const;

    virtual void makeSound(void) const;
};

#endif