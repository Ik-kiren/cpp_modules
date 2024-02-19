#include "Fixed.hpp"

Fixed::Fixed(void) : n(0)
{
    std::cout << "default constructor called" << std::endl;

    return;
}

Fixed::Fixed(int const _n) : n(_n)
{
    std::cout << "parametric constructor called" << std::endl;

    return;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "copy constructor called" << std::endl;
    *this = src;

    return;
}

Fixed::~Fixed(void)
{
    std::cout << "destructor called" << std::endl;

    return;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->n;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "SetRawBits member function called" << std::endl;
    this->n = raw;

    return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "copy assignement operator called" << std::endl;

    if (this != &rhs)
        this->n = rhs.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.getRawBits();

    return o;
}

