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

class PmergeMe {
 private:
  std::deque<int> _dtab;
  std::vector<int> _vtab;

  PmergeMe(void);

 public :
  explicit PmergeMe(std::string str);
  PmergeMe(PmergeMe const &src);
  ~PmergeMe(void);

  void strtodeque(char **tab);
  void strtovector(char **tab);

  void dequeSort();
  void vectorSort();

  PmergeMe &operator=(PmergeMe const &rhs);
};
