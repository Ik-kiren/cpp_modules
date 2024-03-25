#include "Serializer.hpp"

int main()
{
    uintptr_t t;
    Data *ptr2;
    Data ptr;
    
    ptr.nbr = 5;
    ptr.u = 'c';

    std::cout << &ptr << std::endl;
    std::cout << ptr.nbr << std::endl;
    std::cout << ptr.u << std::endl;

    t = Serializer::serialize(&ptr);
    ptr2 = Serializer::deserialize(t);

    std::cout << ptr2 << std::endl;
    std::cout << ptr2->nbr << std::endl;
    std::cout << ptr2->u << std::endl;
}