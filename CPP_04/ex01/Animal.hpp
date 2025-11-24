#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
	std::string type;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	std::string getType() const;
	virtual void makeSound() const;
	virtual void showThought(int index) const;
};

#endif
