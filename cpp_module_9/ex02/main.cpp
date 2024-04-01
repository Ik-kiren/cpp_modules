// Copyright [2024] <Chris dupuis>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:20:10 by cdupuis           #+#    #+#             */
/*   Updated: 2024/04/01 14:38:11 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc <= 2) {
        std::cout << "not enough arguments" << std::endl;
        return 1;
    }
    for (size_t i = 1; argv[i] != NULL ; i++) {
        std::string str = argv[i];
        if (str.find_first_not_of("0123456789") != std::string::npos) {
            std::cout << "error" << std::endl;
            return 1;
        }
    }
    PmergeMe mergeme(argv + 1);
    mergeme.dequeSort();
    mergeme.vectorSort();
    mergeme.printResult();
}

