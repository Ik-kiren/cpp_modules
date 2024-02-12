#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:

    Brain *brain;

public:

    Cat(void);
    Cat(Cat &cat);
    ~Cat(void);

    Cat &operator=(const Cat &rhs);

    void makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
public:

    WrongCat(void);
    ~WrongCat(void);

    void makeSound(void) const;
};

#endif