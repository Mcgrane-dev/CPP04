#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain {
public:
	std::string ideas[100];

	Brain& operator=(const Brain& obj);
	Brain(const Brain& obj);
	Brain();
	~Brain();
};

#endif