#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <stdexcept>

template< typename T >
class Array
{
private:

    T *tab;
    int tab_size;
    
public:

    Array() : tab_size(10)
    {
        tab = new T[10];
    }
    Array(unsigned int nbr) : tab_size(nbr)
    {
        tab = new T[nbr];
    }

    Array(Array const &src)
    {
        this->tab_size = src.tab_size;
        this->tab = new T[this->tab_size];

        for (int i = 0; i < this->tab_size; i++)
        {
            tab[i] = src.tab[i];
        }
    }

    ~Array()
    {
        delete [] tab;   
    }

    T &operator[](int index)
    {
        if (index >= tab_size || index < 0)
            throw std::out_of_range ("out of range");
        return (tab[index]);
    }

    Array &operator=(Array const &rhs)
    {
        this->tab_size = rhs.tab_size;
        this->tab = new T[this->tab_size];

        for (int i = 0; i < this->tab_size; i++)
        {
            tab[i] = rhs.tab[i];
        }
        return *this;
    }

    int size()
    {
        return this->tab_size;
    }
};

#endif