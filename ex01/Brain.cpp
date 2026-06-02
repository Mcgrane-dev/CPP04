#include "Brain.hpp"

Brain& Brain::operator=(const Brain& obj) // assignmemnt operator
{
	std::cout << "Assignment operator Brain called\n";
	if(this != &obj)
	{
		std::copy(obj.ideas, obj.ideas + 100, ideas);
	}
	return *this;
}

Brain::Brain(const Brain& obj) // copy constructor
{
	std::cout << "Copy constructor Brain called\n";
	std::copy(obj.ideas, obj.ideas + 100, ideas);
}

Brain::Brain()
{
	std::cout << "Constructor Brain called\n";
}

Brain::~Brain()
{
	std::cout << "Deconstructor Brain called\n";
}