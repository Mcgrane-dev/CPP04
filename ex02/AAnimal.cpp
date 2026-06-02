#include "AAnimal.hpp"

std::string AAnimal::getType() const
{
	return type;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal sounds\n";
}

AAnimal::AAnimal()
{
	std::cout << "Constructor AAnimal called\n";
}

AAnimal::~AAnimal()
{
	std::cout << "Deconstructor AAnimal called\n";
}