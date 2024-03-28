#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <cstdlib>
# include <iomanip>

class BitcoinExchange
{
 private:

  BitcoinExchange(void);

  std::map<std::string, double> data;

 public :

  BitcoinExchange(std::ifstream &file);
  //BitcoinExchange(BitcoinExchange const &src);
  ~BitcoinExchange(void);

  void getBitcoinExchange(std::ifstream &file);

  //BitcoinExchange &operator=(BitcoinExchange const &rhs);
};

#endif