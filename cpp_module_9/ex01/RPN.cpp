// Copyright [2024] <Chris dupuis>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:30:03 by cdupuis           #+#    #+#             */
/*   Updated: 2024/03/30 11:30:04 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01/RPN.hpp"

RPN::RPN(void) {
  this->_rpnstack.push(0);
}

RPN::RPN(char *_str) {
    std::size_t pos;
    char *ptr;
    std::string str = _str;
    if (str.find_first_not_of("0123456789+*/- ") != std::string::npos)
        throw std::out_of_range("wrong char");
    do {
        std::cout << str << std::endl;
        pos = str.find_first_of("0123456789+-*/");
        if (pos == std::string::npos)
            break;
        if (str[pos] == '+') {
            plusOperation(&str, pos);
        } else if (str[pos] == '-') {
            minusOperation(&str, pos);
        } else if (str[pos] == '*') {
            multOperation(&str, pos);
        } else if (str[pos] == '/') {
            divideOperation(&str, pos);
        } else {
            _rpnstack.push(strtod(str.c_str() + pos, NULL));
            std::cout << "stack = " << _rpnstack.top() << std::endl;
            std::cout << "pos = " << pos << std::endl;
            str.erase(0, pos + 1);
            std::cout << "str = " << str << std::endl;
        }
    } while (pos != std::string::npos);
}

RPN::RPN(RPN const &src) {
    (void)src;
    this->_rpnstack = src._rpnstack;
}

RPN::~RPN(void) {}

void RPN::minusOperation(std::string *str, size_t const &pos) {
    int result = _rpnstack.top();
    _rpnstack.pop();
    _rpnstack.top() -= result;
    std::cout << "top = " << _rpnstack.top() << std::endl;
    str->erase(0, pos + 1);
}

void RPN::multOperation(std::string *str, size_t const &pos) {
    int result = _rpnstack.top();
    _rpnstack.pop();
    _rpnstack.top() *= result;
    std::cout << "top = " << _rpnstack.top() << std::endl;
    str->erase(0, pos + 1);
}

void RPN::divideOperation(std::string *str, size_t const &pos) {
    int result = _rpnstack.top();
    _rpnstack.pop();
    _rpnstack.top() /= result;
    std::cout << "top = " << _rpnstack.top() << std::endl;
    str->erase(0, pos + 1);
}

void RPN::plusOperation(std::string *str, size_t const &pos) {
    int result = _rpnstack.top();
    _rpnstack.pop();
    _rpnstack.top() += result;
    std::cout << "top = " << _rpnstack.top() << std::endl;
    str->erase(0, pos + 1);
}

RPN &RPN::operator=(RPN const &rhs) {
    this->_rpnstack = rhs._rpnstack;
    return *this;
}
