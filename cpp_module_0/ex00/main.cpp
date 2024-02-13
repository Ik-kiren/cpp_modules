#include "Megaphone.hpp"

int main(int argc, char **argv)
{
    Megaphone myMegaphone;

    if (argc == 1)
    {
        std::cout << myMegaphone.getSound() << std::endl;
    }
    else if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
			std::cout << myMegaphone.speakMegaphone(argv[i]) << " ";
        }
		std::cout << std::endl;
    }
}