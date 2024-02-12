#include "Fixed.hpp"

Fixed::Fixed(void) : n(0)
{

    return;
}

Fixed::Fixed(int const _n) : n(_n << n2)
{

    return;
}
Fixed::Fixed(float const _n) : n(std::roundf(_n * (1 << n2)))
{
    return;
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;

    return;
}

Fixed::~Fixed(void)
{
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
    if (this != &rhs)
        this->n = rhs.getRawBits();
    return *this;
}

bool Fixed::operator>(Fixed const &rhs) const
{
    return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(Fixed const &rhs) const
{
    return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const &rhs) const
{
    return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const &rhs) const
{
    return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(Fixed const &rhs) const
{
    return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const &rhs) const
{
    return this->getRawBits() != rhs.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed	&Fixed::operator++(void)
{
    ++this->n;
    return *this;
}

Fixed	Fixed::operator++(int)
{
    Fixed old = *this;
    old.n = this->n++;
    return old;
}

Fixed	&Fixed::operator--(void)
{
    --this->n;
    return *this;
}

Fixed	Fixed::operator--(int)
{
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

