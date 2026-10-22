/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:39:39 by akonstan          #+#    #+#             */
/*   Updated: 2026/10/22 15:39:39 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer()
{}

Serializer::Serializer(Serializer const& other)
{
	static_cast<void>(other);
}

Serializer& Serializer::operator=(Serializer const& other)
{
	static_cast<void>(other);
	return *this;
}

Serializer::~Serializer()
{}

uintptr_t Serializer::serialize(Data* ptr){
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return res;
}

Data* Serializer::deserialize(uintptr_t raw){
	Data* res = reinterpret_cast<Data*>(raw);	
	return res;
}

