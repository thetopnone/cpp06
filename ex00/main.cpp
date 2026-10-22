/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:41:01 by akonstan          #+#    #+#             */
/*   Updated: 2026/10/22 15:11:57 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

int main(int argc, char** argv){

	std::cout << std::setprecision(8);
	if (argc != 2){
		std::cout << "Invalid amount of arguments" << std::endl;
		return -1;
	}
	else if (argv == NULL){
		std::cout << "NULL argv pointer" <<std::endl;
		return -2;
	}

	std::string input = argv[1];

	ScalarConverter::convert(input);
	return 0;
}
