/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:45:35 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/09 15:05:02 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>
# include <iostream>
# include <cctype>
# include <cmath>
# include <cstdlib>
# include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const&);
	public:
		ScalarConverter& operator=(ScalarConverter const&);
		~ScalarConverter();

		static void convert(std::string& input);
};

#endif
