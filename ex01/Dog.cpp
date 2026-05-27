#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Woff woff\n";
}

Dog::Dog()
{
	type = "Dog";
	_brain = new Brain;
	std::cout << "Constructor Dog called\n";
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Deconstructor Dog called\n";
}
