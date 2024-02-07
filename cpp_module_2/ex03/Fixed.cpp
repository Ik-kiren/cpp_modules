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
Fixed::Fixed(float const _n) : n(std::roundf(_n * (1 << n2)))
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
    std::cout << "deconstructor called" << std::endl;

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

bool Fixed::operator>(Fixed const &rhs)
{
    std::cout << "greater than operator called" << std::endl;

    return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(Fixed const &rhs)
{
    std::cout << "less than operator called" << std::endl;

    return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const &rhs)
{
    std::cout << "greater than or equal to operator called" << std::endl;

    return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const &rhs)
{
    std::cout << "less than or equal to operator called" << std::endl;

    return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(Fixed const &rhs)
{
    std::cout << "equal to operator called" << std::endl;

    return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const &rhs)
{
    std::cout << "not equal to operator called" << std::endl;

    return this->getRawBits() != rhs.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
    std::cout << "addition operator called" << std::endl;

    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
    std::cout << "substraction operator called" << std::endl;

    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs)
{

    std::cout << "multiplication operator called" << std::endl;

    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
    std::cout << "division operator called" << std::endl;

    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed	&Fixed::operator++(void)
{
    std::cout << "prefix increment operator called" << std::endl;

    ++this->n;
    return *this;
}

Fixed	Fixed::operator++(int)
{
    std::cout << "postfix increment operator called" << std::endl;

    Fixed old = *this;
    old.n = this->n++;
    return old;
}

Fixed	&Fixed::operator--(void)
{
    std::cout << "prefix decrement operator called" << std::endl;

    --this->n;
    return *this;
}

Fixed	Fixed::operator--(int)
{
    std::cout << "postfix decrement operator called" << std::endl;

    Fixed old = *this;
    old.n = this->n--;
    return old;
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n1.toFloat() <= n2.toFloat())
        return n1;
    return n2;
}

Fixed const &Fixed::min(Fixed const &n1, Fixed const &n2)
{
    if (n1.toFloat() <= n2.toFloat())
        return n1;
    return n2;
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n1.toFloat() >= n2.toFloat())
        return n1;
    return n2;
}

Fixed const &Fixed::max(Fixed const &n1, Fixed const &n2)
{
    if (n1.toFloat() >= n2.toFloat())
        return n1;
    return n2;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();

    return o;
}

