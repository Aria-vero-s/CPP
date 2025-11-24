#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	this->type = other.type + "_copy";
	this->_brain = new Brain(*other._brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->type = other.type + "_copy";
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
		std::cout << "Cat assignment operator called" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow! " << std::endl;
}

void Cat::showThought(int index) const {
	if (index < 0 || index >= 100) {
		std::cout << "Error: Index out of bounds" << std::endl;
		return;
	}
	std::cout << "Cat's thought at index " << index << ": " << this->_brain->getIdea(index) << std::endl;
}
