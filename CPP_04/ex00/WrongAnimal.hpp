#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

class WrongAnimal {
protected:
	std::string type;

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	void makeSound() const;
	std::string getType() const;
};

#endif
