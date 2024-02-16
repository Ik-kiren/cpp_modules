#include "Point.hpp"

int main( void ) {
	Point a(6.0f, 8.0f);
	Point b(6.0f, 2.0f);
	Point c(2.0f, 5.0f);
	Point point(7.0f, 5.0f);

	std::cout << a << " " << b << " " << c << std::endl;

	for (float i = 0; i < 10; i++)
	{
		for (float j = 0; j < 12; j++)
		{
			Point *npoint = new Point(j, i);
			if (npoint->getx() == point.getx() && npoint->gety() == point.gety())
				std::cout << "\x1B[34mP\x1B[1m\x1B[0m";
			else if (bsp(a,b,c, *npoint))
			{
				std::cout << "\x1B[31mP\x1B[1m\x1B[0m";
			}
			else
				std::cout << "0";
		}
		std::cout << std::endl;	
	}
	if (bsp(a, b, c, point))
		std::cout << "the point is in the triangle" << std::endl;
	else
		std::cout << "the point is not in the triangle" << std::endl;
}
