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
    ~WrongAnimal(void);

    std::string getType(void) const;

    WrongAnimal &operator=(WrongAnimal const &rhs);

    void makeSound(void) const;
};

#endif