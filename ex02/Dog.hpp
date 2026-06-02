#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private: 
	Brain* _brain; // Pointer so each animal has its own brain not a copy
public:
	void makeSound() const override;

	Dog& operator=(const Dog& obj);
	Dog(const Dog& obj);
	Dog();
	~Dog();
};

#endif