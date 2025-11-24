#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << CYAN << "WrongCat" << RESET << " default constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << CYAN << "WrongCat" << RESET << " destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << CYAN << "WrongCat" << RESET << " copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		std::cout << CYAN << "WrongCat" << RESET << " assignment operator called" << std::endl;
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << RED << "WrongCat" << RESET << " Meow! Meow!" << std::endl;
}
