#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:

    Brain *brain;

public:

    Dog(void);
    Dog(const Dog &dog);
    ~Dog(void);

    Dog &operator=(const Dog &src);

    void makeSound(void) const;
    void setIdea(int nbr, std::string str);
    std::string getIdea(int nbr) const;
};

#endif