#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <list>

class Span
{
private:

  struct shortList : std::exception
  {
    virtual const char *what()const throw();
  };

  std::list<int> _list1;
  size_t  _size;

public :

  Span(void);
  Span(unsigned int unbr);
  Span(Span const &src);
  ~Span(void);

  void addNumber(int nbr);
  void addNumber(std::list<int>::iterator it, std::list<int>::iterator ite);
  void addNumber(int *tab);
  void addNumber(int nbr, int nbr2);
  int shortestSpan();
  int longestSpan();

  Span &operator=(Span const &rhs);
};

#endif