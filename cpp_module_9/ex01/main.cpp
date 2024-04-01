// Copyright [2024] <Chris dupuis>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <cdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:30:21 by cdupuis           #+#    #+#             */
/*   Updated: 2024/03/30 11:30:22 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
    try {
        RPN rpn(argv[1]);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}
