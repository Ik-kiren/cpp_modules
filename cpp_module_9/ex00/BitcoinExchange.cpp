// Copyright [2024] <Chris dupuis>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:31:03 by cdupuis           #+#    #+#             */
/*   Updated: 2024/03/30 11:31:04 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
    this->_data.insert(std::pair<std::string, double>("NULL", 0));
}

BitcoinExchange::BitcoinExchange(std::ifstream &file) {
    std::string line;
    getline(file, line);
    while (getline(file, line)) {
        std::size_t pos = line.find(",");
        std::string key = line.substr(0, pos);
        if (key.find("-") == std::string::npos || key.find_first_not_of("0123456789-") != std::string::npos)
            throw std::out_of_range("out of range1");
        double val = strtod(line.substr(pos + 1).c_str(), NULL);
        this->_data.insert(std::pair<std::string, double>(key, val));
    }

    /*std::map<std::string, double>::iterator it = data.begin();

    for (; it != data.end(); it++)
    {
        std::cout << it->first << " = " << std::fixed << std::setprecision(2) << it->second << std::endl;
    }*/
    file.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) {
    this->_data = src._data;
}

BitcoinExchange::~BitcoinExchange(void) {}

void BitcoinExchange::getBitcoinExchange(std::ifstream &file) {
    std::string line;
    getline(file, line);
    while (getline(file, line)) {
        if (line.empty())
            continue;
        bool found = false;
        std::size_t pos = line.find("|");
        std::string key = line.substr(0, line.find(" "));
        if (key.find("-") == std::string::npos || key.find_first_not_of("0123456789- ") != std::string::npos) {
            std::cout << "error on line" << std::endl;
            continue;
        }
        double val = strtod(line.substr(pos + 1).c_str(), NULL);
        if (val > 1000 || val < 0) {
            std::cout << "error on line" << std::endl;
            continue;
        }
        checkData(key , val, &found);
    }
    file.close();
}

void BitcoinExchange::checkData(std::string key, double val, bool *found) {
    std::map<std::string, double>::iterator it = this->_data.begin();

    std::string lower = it->first;
    for (; it != this->_data.end(); it++) {
        if (key == it->first) {
            *found = true;
            std::cout << key << " = " << it->first << " = " << it->second << std::endl;
            std::cout << std::fixed << std::setprecision(2) << val * it->second << std::endl;
        }
        if (it->first < key && lower < it->first)
            lower = it->first;
    }
    if (!found)
        std::cout << std::fixed << std::setprecision(2) << val * this->_data[lower] << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
    (void)rhs;
    return *this;
}
