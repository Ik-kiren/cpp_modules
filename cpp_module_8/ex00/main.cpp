#include "easyfind.hpp"

int main()
{
    std::list<int> lst1;

    lst1.push_back(2);
    lst1.push_back(20);
    lst1.push_back(25);

    std::vector<int> vec1;

    vec1.push_back(3);
    vec1.push_back(30);
    vec1.push_back(35);

    ::easyfind(lst1, 25);
    ::easyfind(vec1, 50);
}