#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
    std::srand(std::time(NULL));
    int nbr = std::rand() % 3;

    std::cout << nbr << std::endl;

    if (nbr == 0)
        return new A;
    else if (nbr == 1)
        return new B;
    else
        return new C;
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p) != 0)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != 0)
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        Base &t = dynamic_cast<A &>(p);
        (void)t;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception  &ba)
    {
        
    }
    try
    {
        Base &t = dynamic_cast<B &>(p);
        (void)t;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception &ba)
    {

    }
    try
    {
        Base &t = dynamic_cast<C &>(p);
        (void)t;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception  &ba)
    {
        
    }
    
}

int main()
{
    Base g;
    Base *f;

    f = generate();
    identify(f);

    Base &t = *f;
    identify(t);

    delete f;
}