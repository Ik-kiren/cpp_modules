#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
private:

    AMateria *srcs[4];
public:

    MateriaSource(void);
    ~MateriaSource(void);

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(const std::string &type);
};

#endif