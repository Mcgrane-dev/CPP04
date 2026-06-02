#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Meeeeeeeoooooooow\n";
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Assignment operator Cat called\n";
	if(this != &obj)
	{
		delete _brain;
		type = obj.type;
		_brain = new Brain(*obj._brain);
	}
	return *this;
}

Cat::Cat(const Cat& obj)
{
	std::cout << "Copy constructor Cat called\n";
	type = obj.type;
	_brain = new Brain(*obj._brain);
}

Cat::Cat()
{
	std::cout << "Constructor Cat called\n";
	type = "Cat";
	_brain = new Brain;
}

Cat::~Cat()
{
	std::cout << "Deconstructor Cat called\n";
	delete _brain;
}