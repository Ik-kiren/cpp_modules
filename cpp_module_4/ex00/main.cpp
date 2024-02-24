#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    delete i;
    delete j;
    delete meta;

    /*const WrongAnimal* meta2 = new WrongAnimal();
    const Animal* j2 = new Dog();
    const WrongAnimal* i2 = new WrongCat();

    std::cout << std::endl;

    std::cout << j2->getType() << " " << std::endl;
    std::cout << i2->getType() << " " << std::endl;

    std::cout << std::endl;

    i2->makeSound();
    j2->makeSound();
    meta2->makeSound();

    std::cout << std::endl;

    delete i2;
    delete j2;
    delete meta2;*/

    return 0;
}