#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:

    std::string type;

public:

    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &src);
    virtual ~WrongAnimal(void);

    std::string getType(void) const;

    WrongAnimal &operator=(WrongAnimal const &rhs);

    virtual void makeSound(void) const;
};

#endif