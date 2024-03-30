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
    double db = 50.54;
    BitcoinExchange test = db;
    if (argc != 2)
        return (0);
    std::ifstream file("data.csv");
    std::ifstream file2(argv[1]);

    BitcoinExchange data(file);
    data.getBitcoinExchange(file2);
}
