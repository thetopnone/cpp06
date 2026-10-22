/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:46:40 by akonstan          #+#    #+#             */
/*   Updated: 2026/10/22 16:26:40 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iomanip>

int main(void){
	Data* data = new Data(-10, 212.4, "Original Text");
	
	std::cout << std::setprecision(8);
	
	std::cout << "\nORIGINAL DATA\n\n";
	std::cout << "	" << *data << "\n";
	std::cout << "\nSERIALIZING DATA\n\n";
	uintptr_t raw = Serializer::serialize(data);
	std::cout << "Serialized address: " << raw << "\n";
	std::cout << "Original address: " << data << "\n";
	std::cout << "\nDESERIALIZING DATA\n\n";
	Data* original = Serializer::deserialize(raw);
	std::cout << "Deserialized address: " << original << "\n";
	std::cout << "Original address: " << data << "\n";
	std::cout << "\nDATA IN DESERIALIZED POINTER\n\n	" << *original << "\n";	
	delete data;
	return 0;
}
