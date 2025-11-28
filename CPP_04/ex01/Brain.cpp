#include "Brain.hpp"
#include <sstream>
#include <iomanip>

Brain::Brain() {
	int i = 0;
	while (i < 100) {
		std::ostringstream oss;
		oss << "Idea " << i;
		_ideas[i] = oss.str();
		i++;
	}
}

Brain::~Brain() {}

Brain::Brain(const Brain& other) {
	int i = 0;
	while (i < 100) {
		_ideas[i] = other._ideas[i];
		i++;
	}
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		int i = 0;
		while (i < 100) {
			_ideas[i] = other._ideas[i];
			i++;
		}
	}
	return *this;
}

std::string Brain::getIdea(int index) const {
	if (index < 0 || index >= 100) {
		return "Error: Index out of bounds";
	}
	return _ideas[index];
}
