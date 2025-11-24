#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	this->type = other.type + "_copy";
	if (this != &other) {
		type = other.type;
		std::cout << "Animal copy constructor called" << std::endl;
	}
}

Animal& Animal::operator=(const Animal& other) {
	this->type = other.type + "_copy";
	if (this != &other) {
		std::cout << "Animal assignment operator called" << std::endl;
		type = other.type;
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Generic MakeSound()" << std::endl;
}

void Animal::showThought(int index) const {
	(void)index;
	std::cout << "Animal has no brain to show thoughts." << std::endl;
}

std::string Animal::getType() const {
	return type;
}
