#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	if (this != &other) {
		type = other.type;
		std::cout << "WrongAnimal copy constructor called" << std::endl;
	}
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		std::cout << "WrongAnimal assignment operator called" << std::endl;
		type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "Generic wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}