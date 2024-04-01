/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:29:47 by cdupuis           #+#    #+#             */
/*   Updated: 2024/04/01 15:16:26 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {
    this->_dtab.push_back(0);
    this->_vtab.push_back(0);
}

PmergeMe::PmergeMe(char **tab) {
  this->_elementnbr = 0;
  this->_dtime = 0;
  this->_vtime = 0;
  std::cout << "before: ";
  for (size_t i = 0; tab[i] != NULL ; i++) {
    std::cout << tab[i] << " ";
    this->_elementnbr++;
  }
  std::cout << std::endl;
  this->strtodeque(tab);
  this->strtovector(tab);
}

PmergeMe::PmergeMe(PmergeMe const &src) {
  this->_dtab = src._dtab;
  this->_vtab = src._vtab;
  this->_elementnbr = src._elementnbr;
  this->_dtime = src._dtime;
  this->_vtime = src._vtime;
}

PmergeMe::~PmergeMe(void) {}

void PmergeMe::strtodeque(char **tab) {
  for (size_t i = 0; tab[i] != NULL ; i++) {
    std::string str = tab[i];
    this->_dtab.push_back(atoi(tab[i]));
  }
}

void PmergeMe::strtovector(char **tab) {
  for (size_t i = 0; tab[i] != NULL ; i++) {
    std::string str = tab[i];
    this->_vtab.push_back(atoi(tab[i]));
  }
}

void PmergeMe::dequeSort() {
  std::clock_t clock_start = std::clock();
  std::deque<int> tmpdeque = splitdeque();
  sortHighest(tmpdeque);
  mergedeque(tmpdeque);

  std::clock_t clock_end = std::clock();
  this->_dtime = 1000000.0 * (clock_end - clock_start) /  CLOCKS_PER_SEC;
}

void PmergeMe::vectorSort() {
  std::clock_t clock_start = std::clock();
  std::vector<int> tmpvector = splitvector();

  sortHighest(tmpvector);
  mergevector(tmpvector);

  std::clock_t clock_end = std::clock();
  this->_vtime = 1000000.0 * (clock_end - clock_start) /  CLOCKS_PER_SEC;
}

void PmergeMe::printResult() {
  std::cout << "after: ";
  for (std::vector<int>::iterator it = this->_vtab.begin(); it != this->_vtab.end(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  std::cout << "time to process a range of "
            << this->_elementnbr
            << " with std::deque = "
            << std::fixed
            << std::setprecision(2)
            << this->_dtime
            << " us"
            << std::endl;

  std::cout << "time to process a range of "
            << this->_elementnbr
            << " with std::vector = "
            << std::fixed
            << std::setprecision(2)
            << this->_vtime
            << " us"
            << std::endl;
}

void PmergeMe::sortHighest(std::deque<int> cont)
{
  bool swapped;
  for (size_t i = 0; i < this->_dtab.size() - 1; i++) {
      swapped = false;
      for (size_t j = 0; j < this->_dtab.size() - i - 1; j++) {
          if (this->_dtab[j] > this->_dtab[j + 1]) {
              std::swap(this->_dtab[j], this->_dtab[j + 1]);
              std::swap(cont[j], cont[j + 1]);
              swapped = true;
          }
      }
      if (swapped == false)
        break;
  }
}

void PmergeMe::sortHighest(std::vector<int> cont) {
  bool swapped;
  for (size_t i = 0; i < this->_vtab.size() - 1; i++) {
      swapped = false;
      for (size_t j = 0; j < this->_vtab.size() - i - 1; j++) {
          if (this->_vtab[j] > this->_vtab[j + 1]) {
              std::swap(this->_vtab[j], this->_vtab[j + 1]);
              std::swap(cont[j], cont[j + 1]);
              swapped = true;
          }
      }
      if (swapped == false)
        break;
  }
}

std::deque<int> PmergeMe::splitdeque()
{
  std::deque<int> cont;
  std::copy(this->_dtab.begin() + (this->_dtab.size() / 2), this->_dtab.end(), std::back_inserter(cont));
  this->_dtab.erase(this->_dtab.begin() + (this->_dtab.size() / 2), this->_dtab.end());

  for (size_t i = 0; i < this->_dtab.size(); i++) {
    if (this->_dtab[i] < cont[i])
      std::swap(this->_dtab[i], cont[i]);
  }
  return cont;
}

std::vector<int> PmergeMe::splitvector()
{
  std::vector<int> cont;
  std::copy(this->_vtab.begin() + (this->_vtab.size() / 2), this->_vtab.end(), std::back_inserter(cont));
  this->_vtab.erase(this->_vtab.begin() + (this->_vtab.size() / 2), this->_vtab.end());

  for (size_t i = 0; i < this->_vtab.size(); i++) {
    if (this->_vtab[i] < cont[i])
      std::swap(this->_vtab[i], cont[i]);
  }
  return cont;
}

void PmergeMe::mergedeque(std::deque<int> cont) {
  this->_dtab.push_front(cont.front());
  cont.pop_front();

  for (std::deque<int>::iterator it = cont.begin(); it != cont.end(); it++) {
    for (std::deque<int>::iterator it2 = this->_dtab.begin(); it2 != this->_dtab.end(); it2++) {
      if (*it < *it2) {
        this->_dtab.insert(it2, *it);
        break;
      }
    }
  }
}

void PmergeMe::mergevector(std::vector<int> cont) {
  this->_vtab.insert(this->_vtab.begin(), cont.front());
  cont.erase(cont.begin());

  for (std::vector<int>::iterator it = cont.begin(); it != cont.end(); it++) {
    for (std::vector<int>::iterator it2 = this->_vtab.begin(); it2 != this->_vtab.end(); it2++) {
      if (*it < *it2) {
        this->_vtab.insert(it2, *it);
        break;
      }
    }
  }
}


PmergeMe &PmergeMe::operator=(PmergeMe const &rhs) {
  this->_dtab = rhs._dtab;
  this->_vtab = rhs._vtab;
  this->_elementnbr = rhs._elementnbr;
  this->_dtime = rhs._dtime;
  this->_vtime = rhs._vtime;
  return *this;
}
