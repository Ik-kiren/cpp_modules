#include <iostream>
#include <fstream>

class Sed
{
    private:
        std::string file1;
        std::string file2;

    public:
        Sed(std::string file_name);
        ~Sed();
        void copyFile(std::string find_str, std::string new_str);
};