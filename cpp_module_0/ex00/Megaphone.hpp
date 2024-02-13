#include <iostream>
#include <bits/stdc++.h> 

class Megaphone
{
    private:

        std::string default_sound;

    public:

        Megaphone(void);
        Megaphone(std::string sound);
        ~Megaphone(void);

        std::string getSound(void) const;

        std::string speakMegaphone(std::string user_string);
};