#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Woff woff\n";
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Assignment operator Dog called\n";
	if(this != &obj)
	{
		delete _brain;
		type = obj.type;
		_brain = new Brain(*obj._brain);
	}
	return *this;
}

Dog::Dog(const Dog& obj) // Copy constructor
{
	std::cout << "Copy constructor Dog called\n";
	type = obj.type;
	_brain = new Brain(*obj._brain);
}

Dog::Dog()
{
	std::cout << "Constructor Dog called\n";
	type = "Dog";
	_brain = new Brain;
}

Dog::~Dog()
{
	std::cout << "Deconstructor Dog called\n";
	delete _brain;
}
