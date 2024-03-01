#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{

}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	(void)src;
}

ScalarConverter::~ScalarConverter(void)
{

}

void ScalarConverter::converter(const char *str)
{
	if (str[0] && std::isalpha(str[0]) && !str[1])
	{
		std::cout << "char = " << str << std::endl;
	}
	std::cout << str << std::endl;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	(void)rhs;
	return *this;
}