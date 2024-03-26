#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <list>
# include <vector>
# include <algorithm>
# include <iostream>

template< typename T >
int easyfind(T a, int nbr)
{
    bool find = false;
    typename T::iterator it;
    typename T::iterator ite = a.end();

    /*if (std::find(a.begin(), a.end(), nbr) == a.end())
    {
        std::cout << "number not found" << std::endl;
        return (0);
    }*/

    for (it = a.begin(); it != ite; ++it)
    {
        if (*it == nbr)
            find = true;;
    }
    if (!find)
    {
        std::cout << "number not found" << std::endl;
        return (0);
    }
    return (1);
}

#endif