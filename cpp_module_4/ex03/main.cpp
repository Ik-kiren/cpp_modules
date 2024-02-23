#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
    //IMateriaSource* src = new MateriaSource();
    MateriaSource *src = new MateriaSource();
    MateriaSource *src2 = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    *src2 = *src;
    ICharacter* me = new Character("me");
    AMateria* tmp;

    std::cout << "\n----------------constructor-------------------\n" << std::endl;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << std::endl;

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);

    std::cout << std::endl;

    bob->equip(tmp);
    bob->use(0, *me);
    tmp = src->createMateria("ice");
    bob->equip(tmp);
    bob->use(1, *me);
    bob->unequip(1);
    Character *cloud = new Character("cloud");
    Character *r13 = new Character("rouge13");
    cloud->equip(tmp);
    tmp = src->createMateria("cure");
    r13->equip(tmp);
    *r13 = *cloud;
    r13->use(0, *cloud);

    std::cout << "\n----------------delete-------------------\n" << std::endl;

    delete cloud;
    delete r13;
    delete bob;
    delete me;
    delete src;
    delete src2;
    return 0;
}