#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        this->srcs[i] = NULL;
    }
    return ;
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (srcs[i] != NULL)
        {
            delete srcs[i];
            srcs[i] = NULL;
        }
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (srcs[i] == NULL)
        {
            this->srcs[i] = m;
            return ;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (srcs[i] != NULL && !srcs[i]->getType().compare(type))
        {
            if (!type.compare("ice"))
            {
                AMateria *tmp = srcs[i]->clone();
                return tmp;
            }
            else if (!type.compare("cure"))
            {
                AMateria *tmp = srcs[i]->clone();
                return tmp;
            }
        }
    }
    return 0;
}