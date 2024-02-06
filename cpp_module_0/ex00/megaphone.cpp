#include <iostream>
#include <bits/stdc++.h> 

class Megaphone
{
    public:
        std::string default_sound;

        Megaphone()
        {
            default_sound = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        }

        std::string speakMegaphone(std::string user_string)
        {
            std::transform(user_string.begin(), user_string.end(), user_string.begin(), ::toupper);
            return user_string;
        }
};

int main(int argc, char **argv)
{
    Megaphone myMegaphone;

    if (argc == 1)
    {
        std::cout << myMegaphone.default_sound << std::endl;
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