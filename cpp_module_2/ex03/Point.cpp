#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
    std::cout << "constructor called" << std::endl;
}

Point::Point(float const f1, float const f2) : x(f1), y(f2)
{
    std::cout << "constructor called" << std::endl;
}

Point::Point(Point const &src)
{
    *this = src;

    return;
}

Point::~Point(void)
{
    std::cout << "destructor called" << std::endl;
}

Fixed const Point::getx(void) const
{
    return this->x;
}

Fixed const Point::gety(void) const
{
    return this->y;
}

Point &Point::operator=(Point const &rhs)
{
    if (this != &rhs)
    {
        (Fixed) this->x = rhs.getx();
        (Fixed) this->y = rhs.gety();
    }
    return *this;
}