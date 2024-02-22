#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    Animal *tab[6] = {new Cat(), new Cat(), new Cat(), new Dog(), new Dog(), new Dog(),};

    for (int i = 0; i < 6; i++)
    {
        tab[i]->makeSound();
        delete tab[i];
    }

    /*Cat cat;
    cat.setIdea(0, "cat:idea0");
    cat.setIdea(1, "cat:idea1");
    cat.setIdea(50, "cat:idea50");
    Cat cat2 = cat;

    std::cout << cat2.getIdea(0) << " " << cat2.getIdea(1) << " " << cat2.getIdea(50) << "\n";
    cat2.setIdea(50, "cat2:idea50");

    std::cout << cat.getIdea(50) << " " << cat2.getIdea(50) << "\n";

    cat2.makeSound();
    cat.makeSound();

    cat2.setIdea(0, "cat2:idea0");
    cat.setIdea(0, "cat:idea0");

    cat2.makeSound();
    cat.makeSound();*/
    
    return 0;
}