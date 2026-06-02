#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "===== TEST 1: Virtual Destructor =====" << "\n";
    // Create array of animals (Dogs and Cats)
    const Animal* animals[4] = {
        new Dog(),
        new Cat(),
        new Dog(),
        new Cat()
    };
    
    std::cout << "\nDeleting animals..." << "\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "Type: " << animals[i]->getType() << "\n";
        delete animals[i];
    }
    
    std::cout << "\n===== TEST 2: Copy Constructor (Deep Copy) =====" << "\n";
    Dog dog1;
    std::cout << "dog1 created" << "\n";
    Dog dog2(dog1);  // Copy constructor
    std::cout << "dog2 created from dog1" << "\n";
    std::cout << "Deleting dog2..." << "\n";
    // dog2 should have its own Brain copy
    
    std::cout << "\n===== TEST 3: Assignment Operator (Deep Copy) =====" << "\n";
    Cat cat1;
    std::cout << "cat1 created" << "\n";
    Cat cat2;
    std::cout << "cat2 created" << "\n";
    cat2 = cat1;  // Assignment operator
    std::cout << "cat2 assigned from cat1" << "\n";
    // cat2 should have its own Brain copy
    
    std::cout << "\n===== TEST 4: Polymorphism with makeSound =====" << "\n";
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    std::cout << "animal1 type: " << animal1->getType() << "\n";
    animal1->makeSound();
    std::cout << "animal2 type: " << animal2->getType() << "\n";
    animal2->makeSound();
    delete animal1;
    delete animal2;
    
    std::cout << "\n===== TEST 5: Wrong Classes (Without Virtual) =====" << "\n";
    WrongAnimal* wrong1 = new WrongCat();
    std::cout << "wrong1 type: " << wrong1->getType() << "\n";
    wrong1->makeSound();  // Calls WrongAnimal::makeSound, not WrongCat::makeSound
    delete wrong1;
    
    return 0;
}