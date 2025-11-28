#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main() {
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

	std::cout << std::endl;

	i->showThought(50);
	k->showThought(50);

	std::cout << std::endl;

	delete j;
	delete i;
	delete k;

	std::cout << std::endl;

	const Animal* animals[4];

	int idx = 0;
	while (idx < 2) {
		animals[idx] = new Dog();
		idx++;
	}

	while (idx < 4) {
		animals[idx] = new Cat();
		idx++;
	}

	std::cout << std::endl;

	idx = 0;
	while (idx < 4) {
		std::cout << animals[idx]->getType() << " " << std::endl;
		animals[idx]->makeSound();
		idx++;
	}

	std::cout << std::endl;

	idx = 0;
	while (idx < 4) {
		delete animals[idx];
		idx++;
	}

	std::cout << std::endl;

	Cat first;
	{
		Cat second = first;
		first.showThought(39);
		second.showThought(39);
	}

	first.showThought(39);

	std::cout << std::endl;
	return 0;
}