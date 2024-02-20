#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "brain constructor called" << std::endl;
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