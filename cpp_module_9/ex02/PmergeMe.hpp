// Copyright [2024] <Chris dupuis>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:23:20 by cdupuis           #+#    #+#             */
/*   Updated: 2024/03/30 11:23:26 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <deque>
# include <vector>
# include <string>
# include <algorithm>
# include <utility>
# include <ctime>
# include <iomanip>

class PmergeMe {
 private:
  std::deque<int> _dtab;
  std::vector<int> _vtab;
  double _dtime;
  double _vtime;

  int _elementnbr;

  PmergeMe(void);

 public :
  explicit PmergeMe(char **tab);
  PmergeMe(PmergeMe const &src);
  ~PmergeMe(void);

  void checkTab(char **tab);

  void strtodeque(char **tab);
  void strtovector(char **tab);

  void dequeSort();
  void vectorSort();

  std::deque<int> splitdeque();
  std::vector<int> splitvector();

  void sortHighest(std::deque<int> cont);
  void sortHighest(std::vector<int> cont);

  void mergedeque(std::deque<int> cont);
  void mergevector(std::vector<int> cont);

  void printResult();

  PmergeMe &operator=(PmergeMe const &rhs);
};
