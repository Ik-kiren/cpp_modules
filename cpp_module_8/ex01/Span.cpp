#include "Span.hpp"

Span::Span(void)
{
  
}

Span::Span(unsigned int unbr) : _size(unbr)
{
    
}

Span::Span(Span const &src)
{
    this->_size = src._size;
    this->_list1 = src._list1;
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
    this->_size = rhs._size;
    this->_list1 = rhs._list1;
    return *this;
}

void Span::addNumber(int nbr)
{
    if (_list1.size() >= _size)
        throw std::out_of_range ("test");
    else
        _list1.push_back(nbr);
}

void Span::addNumber(int nbr, int nbr2)
{
    while (nbr < nbr2)
    {
        addNumber(nbr);
        nbr++;
    }
}

void Span::addNumber(std::list<int>::iterator it, std::list<int>::iterator ite)
{
    while (it != ite)
    {
        //std::cout << *it << std::endl;
        addNumber(*it);
        it++;
    }
}

int Span::shortestSpan()
{
    if (_list1.size() == 0 || _list1.size() == 1)
        throw shortList();
    int result = 2147483647;
    std::list<int>::iterator it = _list1.begin();
    std::list<int>::iterator it2 = _list1.begin();

    while (it2 != _list1.end())
    {
        it = it2;
        while (it != _list1.end())
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
    if (_list1.size() == 0 || _list1.size() == 1)
        throw shortList();
    std::list<int>::iterator max = std::max_element(_list1.begin(), _list1.end());
    std::list<int>::iterator min = std::min_element(_list1.begin(), _list1.end());

    std::cout << *max - *min << std::endl;

    return *max;
}



