#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Woff woff\n";
}

Dog::Dog()
{
	type = "Dog";
	std::cout << "Constructor Dog called\n";
}

Dog::~Dog()
{
	std::cout << "Deconstructor Dog called\n";
}
