#include "Fixed.hpp"

Fixed::Fixed(void) : n(0)
{
    std::cout << "constructor called" << std::endl;

    return;
}

Fixed::Fixed(int const _n) : n(_n << n2)
{
    std::cout << "int constructor called" << std::endl;

    return;
}
Fixed::Fixed(float const _n) : n(roundf(_n * (1 << n2)))
{
    std::cout << "float constructor called " << std::endl;

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
    return this->n;
}

void Fixed::setRawBits(int const raw)
{
    this->n = raw;

    return;
}

float Fixed::toFloat(void) const
{
    return (float)(this->getRawBits()) / (1 << n2);
}

int Fixed::toInt(void) const
{
    return this->n >> n2;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "assignement operator called" << std::endl;

    if (this != &rhs)
        this->n = rhs.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();

    return o;
}

