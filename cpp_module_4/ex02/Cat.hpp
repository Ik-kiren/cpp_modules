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
    Cat(Cat const &cat);
    ~Cat(void);

    Cat &operator=(const Cat &rhs);

    void makeSound(void) const;
};

#endif