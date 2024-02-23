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

    virtual ~Animal(void);

    Animal &operator=(const Animal &src);

    std::string getType(void) const;

    virtual void makeSound(void) const = 0;
};

#endif