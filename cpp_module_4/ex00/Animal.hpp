#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:

    std::string type;

public:

    Animal(void);
    Animal(Animal const &src);
    virtual ~Animal(void);

    std::string getType(void) const;

    Animal &operator=(Animal const &rhs);

    virtual void makeSound(void) const;
};

#endif