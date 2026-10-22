/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:39:39 by akonstan          #+#    #+#             */
/*   Updated: 2026/10/22 15:39:39 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <string>
# include <iostream>

class Data
{
	private:
		int			_number;
		float		_decimal;
		std::string	_text;

	public:
		Data();
		Data(int num, float dec, std::string txt);
		Data(Data const&);
		Data& operator=(Data const&);
		~Data();

		int getNumber() const;
		float getDecimal() const;
		std::string const& getText() const;

		void setDecimal(float decimal);
		void setNumber(int number);
		void setText(std::string text);
};

std::ostream& operator<<(std::ostream& os, const Data& data);
#endif
