#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
	std::string type;

public:
	virtual void makeSound() const = 0;
	std::string getType() const;

	AAnimal();
	virtual ~AAnimal();

};

#endif