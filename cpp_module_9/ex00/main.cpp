// Copyright [2024] <Chris dupuis>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:31:45 by cdupuis           #+#    #+#             */
/*   Updated: 2024/03/30 11:31:46 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2)
        return (0);
    try {
        std::ifstream file("data.csv");
        std::ifstream file2(argv[1]);
        if (file.peek() == std::ifstream::traits_type::eof() || file2.peek() == std::ifstream::traits_type::eof()) {
            std::cout << "file empty" << std::endl;
            return (1);
        }
        if (file2.fail() || file.fail()) {
            std::cout << "failed to open" << std::endl;
            return (1);
        }
        BitcoinExchange data(file);
        data.getBitcoinExchange(file2);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}
