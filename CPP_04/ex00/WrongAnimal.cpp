#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << MAGENTA << "WrongAnimal" << RESET << " default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << MAGENTA << "WrongAnimal" << RESET << " destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	if (this != &other) {
		type = other.type;
		std::cout << MAGENTA << "WrongAnimal" << RESET << " copy constructor called" << std::endl;
	}
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		std::cout << MAGENTA << "WrongAnimal" << RESET << " assignment operator called" << std::endl;
		type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << MAGENTA << "WrongAnimal" << RESET << BOLD << " wrong animal sound " << RESET << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}