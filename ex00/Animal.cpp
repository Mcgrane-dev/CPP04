#include "Animal.hpp"

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sounds\n";
}

Animal::Animal()
{
	std::cout << "Constructor Animal called\n";
}

Animal::~Animal()
{
	std::cout << "Deconstructor Animal called\n";
}