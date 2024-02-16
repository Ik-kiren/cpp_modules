#include "Harl.hpp"
#include <cstdlib>
#include <cctype>

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
        return 0;
    
    harl.complain(argv[1]);
    
}