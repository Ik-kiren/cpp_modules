#include "Point.hpp"

int main( void ) {
	Point a(6, 0);
	Point b(0, 6);
	Point c(1, 1);
	Point point(18, 18);

	std::cout << a << " " << b << " " << c << std::endl;

	std::cout << "bsp = " << bsp(a, b, c, point) << std::endl;
}
