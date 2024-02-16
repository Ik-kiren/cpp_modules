#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

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