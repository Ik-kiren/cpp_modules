#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:

    Cure(void);
    Cure(Cure const &src);
    ~Cure(void);

    Cure &operator=(Cure const &rhs);

    AMateria *clone(void) const;
    void use(ICharacter &target);
};

#endif