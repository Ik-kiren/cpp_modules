#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
    return ;
}

Point::Point(float const f1, float const f2) : x(f1), y(f2)
{
    return ;
}

Point::Point(Point const &src) : x(src.x), y(src.y)
{
    return;
}

Point::~Point(void)
{
    return ;
}

Fixed Point::getx(void) const
{
    return this->x;
}

Fixed Point::gety(void) const
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

std::ostream	&operator<<(std::ostream &o, Point const &i)
{
    o << i.getx();
    o << i.gety();

    return o;
}