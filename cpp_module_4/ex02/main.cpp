#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    delete j;
    delete i;

    std::cout << std::endl;

    Animal *tab[6] = {new Cat(), new Cat(), new Cat(), new Dog(), new Dog(), new Dog(),};

    std::cout << std::endl;

    for (int i = 0; i < 6; i++)
    {
        tab[i]->makeSound();
        delete tab[i];
        std::cout << std::endl;
    }

    /*const WrongAnimal *doggo = new WrongCat;
    Cat dog;
    doggo->makeSound();

    delete doggo;*/
    return 0;
}