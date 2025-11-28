#include "WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog() {
	this->type = "WrongDog";
	std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other) : WrongAnimal(other) {
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other) {
	if (this != &other) {
		std::cout << "WrongDog assignment operator called" << std::endl;
	}
	return *this;
}

void WrongDog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}