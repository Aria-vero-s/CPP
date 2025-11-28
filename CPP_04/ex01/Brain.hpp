#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
public:
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	std::string getIdea(int index) const;

private:
	std::string _ideas[100];
};

#endif
