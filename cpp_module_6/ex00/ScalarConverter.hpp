#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>

class ScalarConverter
{
private:

    ScalarConverter(void);
    ScalarConverter(ScalarConverter const &src);

public :

	~ScalarConverter(void);

	static void charConverter(char c);
	static void intConverter(int nbr);
	static void floatConverter(float nbr);
	static void converter(const std::string str);

	ScalarConverter &operator=(ScalarConverter const &rhs);
};

#endif