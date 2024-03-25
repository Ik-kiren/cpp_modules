#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
	int nbr;
	char u;
};


class Serializer
{
private:

	Serializer(void);
	Serializer(Serializer const &src);

public :

	~Serializer(void);

	static	uintptr_t	serialize(Data *ptr);
	static	Data		*deserialize(uintptr_t raw);

	Serializer &operator=(Serializer const &rhs);
};

#endif