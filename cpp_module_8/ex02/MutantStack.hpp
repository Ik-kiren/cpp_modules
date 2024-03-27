#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>
# include <deque>
# include <iostream>

template< typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
 public :

  MutantStack(void) : std::stack<T, C>(){};
  ~MutantStack(void){};

  typedef typename C::iterator iterator;

  iterator begin()
  {
    return this->c.begin();
  }

  iterator end()
  {
    return this->c.end();
  }
};

#endif