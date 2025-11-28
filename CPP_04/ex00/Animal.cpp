#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Default Constructor Called" << std::endl;
}

Animal::Animal(std::string type): _type(type) {}

Animal::Animal(const Animal& other){
	if (this != &other)
		this->_type = other._type;
	std::cout <<"Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	if (this != &other)
		this->_type = other._type;
	std::cout << "Animal assignment operator called" << std::endl;
	return *this;
}

std::string Animal::getType() const{
	return this->_type;
}

void Animal::makeSound() const{
	std::cout << "Animals make sound!" << std::endl;
}
