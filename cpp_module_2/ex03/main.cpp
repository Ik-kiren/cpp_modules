#include "Point.hpp"

int main( void ) {
	Point a(10.05f, 59.65f);
	Point b(a);

	std::cout << b.getx() << std::endl;
}
