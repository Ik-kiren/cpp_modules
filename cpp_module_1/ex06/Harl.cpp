#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[debug]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
    this->info();
}

void Harl::info()
{
    std::cout << "[info]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
    this->warning();
}

void Harl::warning()
{
    std::cout << "[warning]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
    this->error();
}

void Harl::error()
{
    std::cout << "[error]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now\n" << std::endl;
}

Harl::Harl()
{

}

Harl::~Harl()
{
    
}

void Harl::complain(std::string level)
{
    Fnctarray fnctarray[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    for (i; i < 4; i++)
    {
        if(!levels[i].compare(level))
        {
            break;
        }
    }
    
    switch (i)
    {
    case 0:
        (this->*fnctarray[i])();
        break;
    
    case 1:
        (this->*fnctarray[i])();
        break;
    
    case 2:
        (this->*fnctarray[i])();
        break;

    case 3:
        (this->*fnctarray[i])();
        break;

    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }

}