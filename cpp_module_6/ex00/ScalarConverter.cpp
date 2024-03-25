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

void ScalarConverter::charConverter(const std::string str)
{
	if (str[0] && std::isprint(str[0]) && !str[1])
		std::cout << "char = " << str[0] << std::endl;
	else if (str[0] && atoi(str.c_str()) >= 32 && atoi(str.c_str()) <= 127)
		std::cout << "char = " << static_cast<char>(atoi(str.c_str())) << std::endl;
	else
		std::cout << "char = Non displayable" << std::endl;
}

void ScalarConverter::intConverter(const std::string str)
{
	if (str == "nan" || str == "inf")
		std::cout << "int = impossible" << std::endl;
	else if (std::strtod(str.c_str(), NULL) > std::numeric_limits<int>::max() || std::strtod(str.c_str(), NULL) < std::numeric_limits<int>::min())
		std::cout << "int = overflow" << std::endl;
	else
		std::cout << "int = " << static_cast<int>(atoi(str.c_str())) << std::endl;
}

void ScalarConverter::floatConverter(const std::string str)
{
	std::cout << std::fixed << std::setprecision(2) << "float = " << static_cast<float>(strtod(str.c_str(), NULL)) << "f" << std::endl;
}

void ScalarConverter::doubleConverter(const std::string str)
{
	std::cout << std::fixed << std::setprecision(2) << "double = " << strtod(str.c_str(), NULL) << std::endl;
}

void ScalarConverter::converter(const std::string str)
{
	if (str[0] && std::isprint(str[0]) && !str[1])
	{
		std::cout << "char = " << static_cast<char>(str[0]) << std::endl;
		std::cout << "int = " << static_cast<int>(str[0]) << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "float = " << static_cast<float>(str[0]) << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "double = " << static_cast<double>(str[0]) << std::endl;
		return ;
	}
	charConverter(str);
	intConverter(str);
	floatConverter(str);
	doubleConverter(str);
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	(void)rhs;
	return *this;
}