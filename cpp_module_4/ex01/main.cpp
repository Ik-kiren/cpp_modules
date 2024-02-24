#include "Dog.hpp"
#include "Cat.hpp"

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

    /*Cat cat;
    cat.setIdea(0, "cat:idea0");
    cat.setIdea(1, "cat:idea1");
    cat.setIdea(50, "cat:idea50");
    Cat cat2;
    cat2 = cat;

    std::cout << std::endl;

    std::cout << cat2.getIdea(0) << " " << cat2.getIdea(1) << " " << cat2.getIdea(50) << std::endl;
    cat2.setIdea(50, "cat2:idea50");

    std::cout << std::endl;

    std::cout << cat.getIdea(50) << " " << cat2.getIdea(50) << std::endl;

    std::cout << std::endl;

    cat2.makeSound();
    cat.makeSound();

    cat2.setIdea(0, "cat2:idea0");
    cat.setIdea(0, "cat:idea0");

    std::cout << std::endl;

    cat2.makeSound();
    cat.makeSound();

    std::cout << std::endl;*/

    /*Dog *dog = new Dog;
    dog->setIdea(0, "dog:idea0");
    dog->setIdea(1, "dog:idea1");
    dog->setIdea(50, "dog:idea50");
    Dog *dog2 = new Dog;
    *dog2 = *dog;

    std::cout << std::endl;

    std::cout << dog2->getIdea(0) << " " << dog2->getIdea(1) << " " << dog2->getIdea(50) << std::endl;
    dog2->setIdea(50, "dog2:idea50");

    std::cout << std::endl;

    std::cout << dog->getIdea(50) << " " << dog2->getIdea(50) << std::endl;

    std::cout << std::endl;

    dog2->makeSound();
    dog->makeSound();

    dog2->setIdea(0, "dog2:idea0");
    dog->setIdea(0, "dog:idea0");

    std::cout << std::endl;

    dog2->makeSound();
    dog->makeSound();

    std::cout << std::endl;

    delete dog;
    delete dog2;*/
    
    return 0;
}