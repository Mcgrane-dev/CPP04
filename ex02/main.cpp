#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "===== TEST 1: AAnimal is Abstract =====" << "\n";
    // This would NOT compile (uncomment to see the error):
    // AAnimal animal;  // ERROR: cannot instantiate abstract class 'AAnimal'
    // AAnimal* ptr = new AAnimal();  // ERROR: same reason
    std::cout << "AAnimal cannot be instantiated (it's abstract)" << "\n";
    std::cout << "But we can use pointers/references to AAnimal!" << "\n";
    
    std::cout << "\n===== TEST 2: Polymorphism through Base Class Pointers =====" << "\n";
    // This IS allowed - concrete derived classes through abstract base pointers
    const AAnimal* animals[4] = {
        new Dog(),
        new Cat(),
        new Dog(),
        new Cat()
    };
    
    std::cout << "\nDeleting animals..." << "\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "Type: " << animals[i]->getType() << " - Sound: ";
        animals[i]->makeSound();
        delete animals[i];
    }
    
    std::cout << "\n===== TEST 3: Copy Constructor (Deep Copy) =====" << "\n";
    Dog dog1;
    std::cout << "dog1 created" << "\n";
    Dog dog2(dog1);  // Copy constructor
    std::cout << "dog2 created from dog1" << "\n";
    std::cout << "Deleting dog2..." << "\n";
    // dog2 should have its own Brain copy
    
    std::cout << "\n===== TEST 4: Assignment Operator (Deep Copy) =====" << "\n";
    Cat cat1;
    std::cout << "cat1 created" << "\n";
    Cat cat2;
    std::cout << "cat2 created" << "\n";
    cat2 = cat1;  // Assignment operator
    std::cout << "cat2 assigned from cat1" << "\n";
    // cat2 should have its own Brain copy
    
    std::cout << "\n===== TEST 5: Direct Instantiation of Concrete Classes =====" << "\n";
    Dog myDog;
    std::cout << "myDog type: " << myDog.getType() << " - Sound: ";
    myDog.makeSound();
    
    Cat myCat;
    std::cout << "myCat type: " << myCat.getType() << " - Sound: ";
    myCat.makeSound();
    
    std::cout << "\n===== TEST 6: Wrong Classes (Without Virtual) =====" << "\n";
    WrongAnimal* wrong1 = new WrongCat();
    std::cout << "wrong1 type: " << wrong1->getType() << " - Sound: ";
    wrong1->makeSound();  // Calls WrongAnimal::makeSound, not WrongCat::makeSound
    delete wrong1;
    
    return 0;
}