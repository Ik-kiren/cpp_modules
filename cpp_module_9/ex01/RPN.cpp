#include "RPN.hpp"

RPN::RPN(void)
{
  
}

RPN::RPN(char *_str)
{
    std::string str = _str;
    result = 0;
    rpnstack.push(strtod(str.c_str(), NULL));

    
}

RPN::RPN(RPN const &src)
{

}

RPN::~RPN(void)
{
  
}

RPN &RPN::operator=(RPN const &rhs)
{
  
}