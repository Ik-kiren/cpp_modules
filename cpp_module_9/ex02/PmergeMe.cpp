// Copyright [2024] <Chris dupuis>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:29:47 by cdupuis           #+#    #+#             */
/*   Updated: 2024/03/30 11:29:48 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02/PmergeMe.hpp"

PmergeMe::PmergeMe(void) {
    this->_dtab.push_back(0);
    this->_vtab.push_back(0);
}

PmergeMe::PmergeMe(std::string str) {
    
}

PmergeMe::PmergeMe(PmergeMe const &src) {
  this->_dtab = src._dtab;
  this->_vtab = src._vtab;

}

PmergeMe::~PmergeMe(void) {}

void PmergeMe::strtodeque(char **tab) {
  while (tab) {
    std::string str = *tab;
    if (str.find_first_not_of("0123456789") != std::string::npos)
      throw;
    this->_dtab.push_back(atoi(*tab));
    tab++;
  }
}

void PmergeMe::strtovector(char **tab) {
  while (tab) {
    std::string str = *tab;
    if (str.find_first_not_of("0123456789") != std::string::npos)
      throw;
    this->_vtab.push_back(atoi(*tab));
    tab++;
  }
}

void PmergeMe::dequeSort() {
  std::deque<int> tmpdeque;

  for (std::deque<int>::reverse_iterator it = this->_dtab.rbegin() + (this->_dtab.size() / 2); it != this->_dtab.rend(); it++) {
    tmpdeque.push_back(*it);
    this->_dtab.erase();
  }
  
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs) {
  
}