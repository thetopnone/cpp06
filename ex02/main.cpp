/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:52:46 by akonstan          #+#    #+#             */
/*   Updated: 2026/10/22 17:16:10 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate(void){
	srand(time(NULL));

	std::cout << "Generate called\n";
	switch (rand() % 3){
		case 0
			return (new A);
			break;
		case 1
			return (new B);
			break;
		case 2
			return (new C);
			break;
	}
}

void identify(Base* p){
	A* a_ptr = dynamic_cast<A*>(p);
	B* b_ptr = dynamic_cast<B*>(p);
	C* c_ptr = dynamic_cast<C*>(p);

	if (a_ptr != nullptr)
		std::cout << "Pointer to A\n";
	else if (b_ptr != nullptr)
		std::cout << "Pointer to B\n";
	else if (c_ptr != nullptr)
		std::cout << "Pointer to C\n";
	else
		std::cout << "All conversions failed\n";
}

void identify(Base& p){
	
}

int main(void)
{
	return 0;
}
