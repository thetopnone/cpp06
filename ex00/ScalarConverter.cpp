/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:45:38 by akonstan          #+#    #+#             */
/*   Updated: 2026/10/21 18:18:47 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <limits>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const& other)
{
	static_cast<void>(other);
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const& other)
{
	static_cast<void>(other);
	return *this;
}

ScalarConverter::~ScalarConverter()
{}

static void handleChar(double& num){
	unsigned char c;

	c = static_cast<unsigned char>(num);

	if (std::isprint(c) != 0)
		std::cout << "char: " << c << "\n";
	else
		std::cout << "char: Non displayable\n";
}

static void handleInt(double& num){
	if (num < static_cast<double>(std::numeric_limits<int>::min())
		|| num > static_cast<double>(std::numeric_limits<int>::max()))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(num) << "\n";
}

static void handleFloat(double& num){
	float fl_num = static_cast<float>(num);

	std::cout << "float: " << fl_num;
	if (fl_num - static_cast<int>(num) == 0)
		std::cout << ".0";
	std::cout << "f\n";
}

static void handleDouble(double& num){

	std::cout << "double: " << num;
	if (num - static_cast<int>(num) == 0)
		std::cout << ".0";
	std::cout << "\n";
}

void ScalarConverter::convert(std::string& input){
	
	char* end = NULL;

	double num = strtod(input.c_str(), &end);
	if (*end != '\0'){
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
		return ;
	}
	handleChar(num);
	handleInt(num);
	handleFloat(num);
	handleDouble(num);
}
