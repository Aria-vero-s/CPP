#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string _type): Animal(_type) {
	std::cout << "Cat param constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	this->_type = other._type + "_copy";
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "Cat assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Miaouuuuu" << std::endl;
}

