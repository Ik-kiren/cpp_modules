#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    Weapon *club = new Weapon("spiked pointer club");
    HumanA *carrey = new HumanA("carrey", *club);
    carrey->attack();
    club->setType("other type of pointer club");
    carrey->attack();
    delete club;
    delete carrey;

return 0;
}
