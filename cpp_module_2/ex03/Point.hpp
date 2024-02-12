#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;

public:
    Point(void);
    Point(float const f1, float const f2);
    Point(Point const &src);
    ~Point(void);

	Fixed getx(void) const;
	Fixed gety(void) const;

	Point	&operator=(Point const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Point const &i);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif