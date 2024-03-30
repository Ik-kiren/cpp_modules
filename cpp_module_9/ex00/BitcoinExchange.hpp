// Copyright [2024] <Chris dupuis>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:30:48 by cdupuis           #+#    #+#             */
/*   Updated: 2024/03/30 11:30:50 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <map>
# include <cstdlib>
# include <iomanip>
# include <string>
# include <utility>

class BitcoinExchange {
 private:
  BitcoinExchange(void);

  std::map<std::string, double> _data;

 public :

  explicit BitcoinExchange(std::ifstream &file);
  BitcoinExchange(BitcoinExchange const &src);
  ~BitcoinExchange(void);

  void checkData(std::string key, double val, bool *find);

  void  getBitcoinExchange(std::ifstream &file);

  BitcoinExchange &operator=(BitcoinExchange const &rhs);
};
