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

void ScalarConverter::charConverter(char c)
{
	std::cout << "char = " << c << std::endl;
	std::cout << "int = " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "float = " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double = " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::intConverter(int nbr)
{
	std::cout << "char = " << static_cast<char>(nbr) << std::endl;
	std::cout << "int = " << nbr << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "float = " << static_cast<float>(nbr) << "f" << std::endl;
	std::cout << "double = " << static_cast<double>(nbr) << std::endl;
}

void ScalarConverter::floatConverter(float nbr)
{
	std::cout << "char = " << static_cast<char>(nbr) << std::endl;
	std::cout << "int = " << static_cast<int>(nbr) << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "float = " << nbr << "f" << std::endl;
	std::cout << "double = " << static_cast<double>(nbr) << std::endl;
}

void ScalarConverter::converter(const std::string str)
{
	if (str[0] && std::isalpha(str[0]) && !str[1])
	{
		charConverter(str[0]);
	}
	else if (!str.empty() && str.find_first_not_of("0123456789") == std::string::npos)
	{
		intConverter(atoi(str.c_str()));
	}
	else if (!str.empty() && str.find_first_not_of("0123456789f.") == std::string::npos)
	{
		floatConverter(atof(str.c_str()));
	}
	else if (!str.empty() && str.find_first_not_of("0123456789.") == std::string::npos)
	{
		floatConverter(atol(str.c_str()));
	}
	std::cout << str << std::endl;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	(void)rhs;
	return *this;
}