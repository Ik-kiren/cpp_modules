#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>

class ScalarConverter
{
private:

    ScalarConverter(void);
    ScalarConverter(ScalarConverter const &src);

public :

  ~ScalarConverter(void);

  static void converter(const char *str);

  ScalarConverter &operator=(ScalarConverter const &rhs);
};

#endif