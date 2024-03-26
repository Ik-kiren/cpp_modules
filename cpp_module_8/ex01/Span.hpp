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

  std::list<int> list1;
  int size;

public :

  Span(void);
  Span(unsigned int unbr);
  Span(Span const &src);
  ~Span(void);

  void addNumber(int nbr);
  int shortestSpan();
  int longestSpan();

  Span &operator=(Span const &rhs);
};

#endif