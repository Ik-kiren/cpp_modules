#include "Fixed.hpp"

int main( void )
{
	Fixed a(0);
	Fixed b( a );
	Fixed c;
	
	std::cout << std::endl;

	c = b;

	std::cout << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::cout << std::endl;

	a.setRawBits(10);
	b.setRawBits(15);
	c.setRawBits(20);

	std::cout << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << std::endl;

	return 0;
}
