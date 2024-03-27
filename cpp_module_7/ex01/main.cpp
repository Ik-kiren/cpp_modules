#include "iter.hpp"

void add_one(int &nbr)
{
    nbr++;
}

void print_one(int &nbr)
{
    std::cout << nbr << std::endl;
}

int main()
{
    int tab[3] = {1, 3, 5};

    int nbr = 3;
    ::iter(tab, nbr, add_one);

    std::cout << tab[0] << " " << tab[1] << " " << tab[2] << std::endl;

    iter(tab, nbr, print_one);
}