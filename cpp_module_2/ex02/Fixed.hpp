#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed 
{
private:

	int n;
	static int const n2 = 8;

public:

	Fixed(void);
	Fixed(int const _n);
    Fixed(float const _n);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed	&operator=(Fixed const &rhs);

	bool	operator>(Fixed const &rhs);
	bool	operator<(Fixed const &rhs);
	bool	operator>=(Fixed const &rhs);
	bool	operator<=(Fixed const &rhs);
	bool	operator==(Fixed const &rhs);
	bool	operator!=(Fixed const &rhs);

	Fixed	operator+(Fixed const &rhs);
	Fixed	operator-(Fixed const &rhs);
	Fixed	operator*(Fixed const &rhs);
	Fixed	operator/(Fixed const &rhs);

	Fixed	operator++(int);
	Fixed	&operator++(void);
	Fixed	operator--(int);
	Fixed	&operator--(void);

	static Fixed &min(Fixed &n1, Fixed &n2);
	static Fixed const &min(Fixed const &n1, Fixed const &n2);
	static Fixed &max(Fixed &n1, Fixed &n2);
	static Fixed const &max(Fixed const &n1, Fixed const &n2);

	int getRawBits(void) const;
	void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif