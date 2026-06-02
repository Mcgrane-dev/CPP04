#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* _brain; // Pointer so each animal has its own brain not a copy

public:
	void makeSound() const override;

	Cat& operator=(const Cat& obj);
	Cat(const Cat& obj);
	Cat();
	~Cat();
};

#endif