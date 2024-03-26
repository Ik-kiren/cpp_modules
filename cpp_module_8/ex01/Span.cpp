#include "Span.hpp"

Span::Span(void)
{
  
}

Span::Span(unsigned int unbr)
{
    this->size = unbr;  
}

Span::Span(Span const &src)
{
    this->size = src.size;
    this->list1 = src.list1;
}

Span::~Span(void)
{

}

const char *Span::shortList::what() const throw()
{
    return "list is too short";
}

Span &Span::operator=(Span const &rhs)
{
    this->size = rhs.size;
    this->list1 = rhs.list1;
    return *this;
}

void Span::addNumber(int nbr)
{
    if (list1.size() >= size)
        throw std::out_of_range ("test");
    else
        list1.push_back(nbr);
}

int Span::shortestSpan()
{
    if (list1.size() == 0 || list1.size() == 1)
        throw shortList();
    int result = 2147483647;
    std::list<int>::iterator it = list1.begin();
    std::list<int>::iterator it2 = list1.begin();

    while (it2 != list1.end())
    {
        it = it2;
        while (it != list1.end())
        {
            result = std::min(result, abs(*it - *(++it)));
        }
        it2++;
    }
    std::cout << result << std::endl;
    return result;
}

int Span::longestSpan()
{
    if (list1.size() == 0 || list1.size() == 1)
        throw shortList();
    std::list<int>::iterator max = std::max_element(list1.begin(), list1.end());
    std::list<int>::iterator min = std::min_element(list1.begin(), list1.end());

    std::cout << *max - *min << std::endl;

    return *max;
}

