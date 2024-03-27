#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T , typename U, typename V>
void iter(T &tab, U const &size, V &func)
{
    for (int i = 0; i < size; i++)
    {
        func(tab[i]);
    } 
}


#endif