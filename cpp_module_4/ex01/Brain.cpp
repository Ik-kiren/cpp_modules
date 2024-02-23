#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = src.ideas[i];
    }
}

Brain::~Brain()
{
    std::cout << "brain destructor called" << std::endl;
}

std::string Brain::getIdea(int nbr) const
{
    return this->ideas[nbr];
}

void Brain::setIdea(int nbr, std::string str)
{
    this->ideas[nbr] = str;
}

Brain &Brain::operator=(Brain const &rhs)
{
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = rhs.ideas[i];
    }
    return *this;
}