#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <stdlib.h>
# include <cmath>
# include <limits>

class ScalarConverter
{
private:

    ScalarConverter(void);
    ScalarConverter(ScalarConverter const &src);

	ScalarConverter &operator=(ScalarConverter const &rhs);

public :

	~ScalarConverter(void);

	static void charConverter(const std::string nbr);
	static void intConverter(const std::string nbr);
	static void floatConverter(const std::string nbr);
	static void doubleConverter(const std::string nbr);
	static void converter(const std::string str);

};

#endif