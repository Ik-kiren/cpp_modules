#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:

    Ice(void);
    Ice(const Ice &src);
    ~Ice(void);

    Ice &operator=(Ice const &rhs);

    AMateria *clone() const;
    
    void use(ICharacter &target);
};

#endif