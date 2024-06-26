// Copyright [2024] <Chris dupuis>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:29:23 by cdupuis           #+#    #+#             */
/*   Updated: 2024/03/30 11:29:24 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>
# include <algorithm>
# include <string>

class RPN {
 private:
  std::stack<int> _rpnstack;

  RPN(void);

 public :
  explicit RPN(char *str);
  RPN(RPN const &src);
  ~RPN(void);

  void plusOperation(std::string *str, size_t const &pos);
  void minusOperation(std::string *str, size_t const &pos);
  void multOperation(std::string *str, size_t const &pos);
  void divideOperation(std::string *str, size_t const &pos);

  RPN &operator=(RPN const &rhs);
};
