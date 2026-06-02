#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
	std::cout << "Meeeeeeeoooooooow\n";
}

WrongCat::WrongCat()
{
	std::cout << "Constructor WrongCat called\n";
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Deconstructor WrongCat called\n";
}
