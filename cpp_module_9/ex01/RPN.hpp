#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <algorithm>

class RPN
{
private:

std::stack<int> rpnstack;
int result;

public :

  RPN(void);
  RPN(char *str);
  RPN(RPN const &src);
  ~RPN(void);

  RPN &operator=(RPN const &rhs);
};

#endif