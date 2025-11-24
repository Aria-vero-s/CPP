#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main() {
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const Animal* k = new Cat(*(Cat*)i); // Copy of i

	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;

	std::cout << std::endl;

	i->makeSound();
	j->makeSound();
	k->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	i->showThought(50);
	k->showThought(50);

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete k;

	std::cout << std::endl;
	std::cout << std::endl << BLD B_OR INV << "------------------------------- More Tests ------------------------------" << RST << std::endl << std::endl;

	const Animal* animals[4];
	for (int idx = 0; idx < 2; ++idx) {
		animals[idx] = new Dog();
	}
	for (int idx = 2; idx < 4; ++idx) {
		animals[idx] = new Cat();
	}

	std::cout << std::endl;
	for (int idx = 0; idx < 4; ++idx) {
		std::cout << animals[idx]->getType() << " " << std::endl;
		animals[idx]->makeSound();
	}
	std::cout << std::endl;

	for (int idx = 0; idx < 4; ++idx) {
		delete animals[idx];
	}

	std::cout << std::endl;
	std::cout << std::endl << BLD B_OR INV << "----------------------------- Real Deep Copy ----------------------------" << RST << std::endl << std::endl;


	Cat first;
	{
		Cat second = first;
		first.showThought(39);
		second.showThought(39);
	}

	first.showThought(39);

	std::cout << std::endl;
	std::cout << std::endl << BLD B_OR INV << "---------------------------------- End ----------------------------------" << RST << std::endl << std::endl;

	return 0;
}
