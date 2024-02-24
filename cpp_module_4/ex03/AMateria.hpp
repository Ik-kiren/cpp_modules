#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDBLUE    "\033[1m\033[34m"

class ICharacter;

class AMateria
{
protected:

    std::string type;

public:

    AMateria(void);
    AMateria(const std::string &_type);
    AMateria(const AMateria &amateria);
    virtual ~AMateria(void);

    const std::string &getType(void) const;
    AMateria &operator=(const AMateria &rhs);

    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter &target);
};

#endif