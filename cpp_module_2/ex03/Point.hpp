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

	Fixed const getx(void) const;
	Fixed const gety(void) const;

	Point	&operator=(Point const &rhs);
};

#endif