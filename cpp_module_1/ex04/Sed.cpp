#include "Sed.hpp"
#include <cstdlib>

Sed::Sed(std::string file_name) : file1(file_name)
{
    this->file2 = this->file1 + ".replace";
}

Sed::~Sed()
{

}

void Sed::copyFile(std::string find_str, std::string new_str)
{
    std::ifstream infs(this->file1.c_str());

    if (!infs.is_open())
    {
        std::cout << "can't open file" << std::endl;
        exit(1);
    }
    std::string line;
    if (std::getline(infs, line, '\0'))
    {
        std::ofstream outfs(this->file2.c_str());
        size_t index = line.find(find_str);
        while (index != std::string::npos)
        {
            line.erase(index, find_str.length());
            line.insert(index, new_str);
            index = line.find(find_str);
        }
        outfs << line;
        outfs.close();
    }
    else
    {
        std::cout << "file is empty" << std::endl;
    }
    infs.close();
}