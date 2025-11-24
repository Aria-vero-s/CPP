#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	this->_type = other._type + "_copy";
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->_type = other._type + "_copy";
		std::cout << "Dog assignment operator called" << std::endl;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof! " << std::endl;
}
