#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds\n";
}

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor WrongAnimal called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Deconstructor WrongAnimal called\n";
}
