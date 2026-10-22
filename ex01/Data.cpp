/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:39:39 by akonstan          #+#    #+#             */
/*   Updated: 2026/10/22 15:39:39 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
	: _number(0)
	, _decimal(0.0f)
	, _text("")
	{}

Data::Data(int num, float dec, std::string txt)
	: _number(num)
	, _decimal(dec)
	, _text(txt)
	{}
Data::Data(Data const& other)
	: _number(other._number), _decimal(other._decimal), _text(other._text)
	{}

Data& Data::operator=(Data const& other){
	if (this != &other){
		_number = other._number;
		_decimal = other._decimal;
		_text = other._text;
	}
	return *this;
}

Data::~Data()
	{}

int Data::getNumber() const{
	return _number;
}

void Data::setNumber(int number){
	_number = number;
}

float Data::getDecimal() const{
	return _decimal;
}

void Data::setDecimal(float decimal){
	_decimal = decimal;
}

std::string const& Data::getText() const{
	return _text;
}

void Data::setText(std::string text){
	_text = text;
}

std::ostream& operator<<(std::ostream& os, const Data& data){
	os << "data: _number = " << data.getNumber() << " _decimal = "
	   << data.getDecimal() << " _text = \"" << data.getText()
	   << "\"";
	return os;
}
