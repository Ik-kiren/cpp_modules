#include "Harl.hpp"

int main()
{
    std::string line;
    Harl harl;

    do
    {
        std::cout << "cmd : " ;
        std::cin >> line;
        harl.complain(line);
    } while (line.compare("exit"));
    
}