#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(void);
    ~Brain(void);

    std::string getIdea(int nbr) const;
    void setIdea(int nbr, std::string str);
};

#endif