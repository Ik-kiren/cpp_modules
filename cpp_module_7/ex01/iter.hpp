#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T , typename U, typename V>
void iter(T &x, U &y, V &z)
{
    for (int i = 0; i < y; i++)
    {
        z(x[i]);
    } 
}


#endif