#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	this->type = other.type + "_copy";
	this->_brain = new Brain(*other._brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->type = other.type + "_copy";
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
		std::cout << "Dog assignment operator called" << std::endl;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}

void Dog::showThought(int index) const {
	if (index < 0 || index >= 100) {
		std::cout << "Error: Index out of bounds" << std::endl;
		return;
	}
	std::cout << "Dog's thought at index " << index << ": " << this->_brain->getIdea(index) << std::endl;
}
