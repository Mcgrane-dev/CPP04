#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "========== CORRECT POLYMORPHISM (Virtual Functions) ==========" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n========== WRONG POLYMORPHISM (No Virtual) ==========" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	k->makeSound(); // will output WRONG ANIMAL sound!
	meta2->makeSound();

	delete meta2;
	delete k;

	std::cout << "\n========== ADDITIONAL TESTS ==========" << std::endl;
	std::cout << "Testing direct object creation:" << std::endl;
	Dog dog;
	dog.makeSound();
	Cat cat;
	cat.makeSound();

	std::cout << "\nTesting pointers with deletion:" << std::endl;
	Animal* animal1 = new Dog();
	Animal* animal2 = new Cat();
	animal1->makeSound();
	animal2->makeSound();
	delete animal1;
	delete animal2;

	return 0;
}