#include "Sed.hpp"

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "should have 3 arguments" << std::endl;
        return 0;
    }
    Sed sed(argv[1]);
    sed.copyFile(argv[2], argv[3]);
}