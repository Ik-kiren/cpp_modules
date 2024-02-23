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

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (!src.srcs[i])
            this->srcs[i] = NULL;
        else
            this->srcs[i] = src.srcs[i]->clone();
    }
    
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
                AMateria *tmp = srcs[i]->clone();
                return tmp;
        }
    }
    return 0;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (srcs[i] != NULL)
        {
            delete srcs[i];
        }
        if (rhs.srcs[i])
            this->srcs[i] = rhs.srcs[i]->clone();
    }
    return *this;
}