#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <list>
# include <vector>
# include <algorithm>
# include <iostream>

//retourner un iterateur

template< typename T >
typename T::iterator easyfind(T a, int nbr)
{
    typename T::iterator it = find(a.begin(), a.end(), nbr);
    if (it == a.end())
    {
        std::cout << "number not found" << std::endl;
        return (it);
    }
    else
        return (it);
}

#endif