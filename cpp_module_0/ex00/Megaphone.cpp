#include "Megaphone.hpp" 


Megaphone::Megaphone(void)
{
    default_sound = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

Megaphone::Megaphone(std::string sound) : default_sound(sound)
{

}

Megaphone::~Megaphone(void)
{

}

std::string Megaphone::getSound(void) const
{
    return this->default_sound;
}

std::string Megaphone::speakMegaphone(std::string user_string)
{
    std::transform(user_string.begin(), user_string.end(), user_string.begin(), ::toupper);
    return user_string;
}