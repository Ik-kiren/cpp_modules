#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(void);
    Brain(Brain const &src);
    ~Brain(void);

    Brain &operator=(Brain const &rhs);

    std::string getIdea(int nbr) const;
    void setIdea(int nbr, std::string str);
};

#endif