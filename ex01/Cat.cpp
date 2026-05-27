#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Meeeeeeeoooooooow\n";
}

Cat::Cat()
{
	type = "Cat";
	_brain = new Brain;
	std::cout << "Constructor Cat called\n";
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Deconstructor Cat called\n";
}