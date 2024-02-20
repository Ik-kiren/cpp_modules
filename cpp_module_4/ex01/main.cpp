#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    /*const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;*/




    Cat i2;
    i2.setIdea(0, "test");
    i2.setIdea(1, "test2");
    i2.setIdea(50, "test50");
    Cat cat = i2;

    std::cout << cat.getIdea(0) << " " << cat.getIdea(1) << " " << cat.getIdea(50) << "\n";
    cat.setIdea(50, "50test");

    std::cout << i2.getIdea(50) << " " << cat.getIdea(50) << "\n";

    i2.makeSound();
    cat.makeSound();

    i2.setIdea(0, "test1");
    cat.setIdea(0, "test2");

    i2.makeSound();
    cat.makeSound();


    /*Animal *tab[6] = {new Cat(), new Cat(), new Cat(), new Dog(), new Dog(), new Dog(),};

    for (int i = 0; i < 6; i++)
    {
        tab[i]->makeSound();
        delete tab[i];
    }*/
    
    return 0;
}