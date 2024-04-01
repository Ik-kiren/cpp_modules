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
    if (file.peek() == std::ifstream::traits_type::eof()) {
        throw std::out_of_range("error in first line");
    }
    while (getline(file, line)) {
        std::size_t pos = line.find(",");
        if (pos == std::string::npos)
            throw std::out_of_range("error on line");
        std::string key = line.substr(0, pos);
        if (key.find("-") == std::string::npos || key.find_first_not_of("0123456789-") != std::string::npos)
            throw std::out_of_range("error format");
        double val = strtod(line.substr(pos + 1).c_str(), NULL);
        this->_data.insert(std::pair<std::string, double>(key, val));
    }
    file.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) {
    this->_data = src._data;
}

BitcoinExchange::~BitcoinExchange(void) {}

void BitcoinExchange::getBitcoinExchange(std::ifstream &file) {
    std::string line;
    getline(file, line);
    if (file.peek() == std::ifstream::traits_type::eof()) {
        throw std::out_of_range("error");
    }
    while (getline(file, line)) {
        if (line.empty())
            continue;
        bool found = false;
        std::size_t pos = line.find("|");
        if (pos == std::string::npos) {
            std::cout << "error: bad input => " << line << std::endl;
            continue;
        }
        std::string key = line.substr(0, line.find(" "));
        if (key.find("-") == std::string::npos || key.find_first_not_of("0123456789- ") != std::string::npos) {
            std::cout << "error on line: " << line << std::endl;
            continue;
        }
        double val = strtod(line.substr(pos + 1).c_str(), NULL);
        if (val > 1000) {
            std::cout << "error: number superior to 1000: " << line << std::endl;
            continue;
        }
        if (val < 0) {
            std::cout << "error: not a positive number: " << line << std::endl;
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
            std::cout << key
                      << " => "
                      << val
                      << " => "
                      << std::fixed
                      << std::setprecision(2)
                      << val * it->second
                      << std::endl;
        }
        if (it->first < key && lower < it->first)
            lower = it->first;
    }
    if (!*found) {
        std::cout << key
                      << " => "
                      << val
                      << " => "
                      << std::fixed
                      << std::setprecision(2)
                      << val * this->_data[lower]
                      << std::endl;
    }
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
    (void)rhs;
    return *this;
}
