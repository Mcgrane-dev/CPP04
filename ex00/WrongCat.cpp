#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
	std::cout << "Meeeeeeeoooooooow\n";
}

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Constructor WrongCat called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "Deconstructor WrongCat called\n";
}
