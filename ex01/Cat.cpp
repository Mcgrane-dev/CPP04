#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Meeeeeeeoooooooow\n";
}

Cat::Cat()
{
	type = "Cat";
	std::cout << "Constructor Cat called\n";
}

Cat::~Cat()
{
	std::cout << "Deconstructor Cat called\n";
}