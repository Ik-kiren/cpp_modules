#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;



    Dog j2;
    Cat i2;
    Dog dog = j2;
    Cat cat = i2;

    Animal *tab[6] = {new Cat(), new Cat(), new Cat(), new Dog(), new Dog(), new Dog(),};

    for (int i = 0; i < 6; i++)
    {
        tab[i]->makeSound();
        delete tab[i];
    }
    
    return 0;
}