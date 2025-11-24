#include "Brain.hpp"
#include <sstream>
#include <iomanip>

Brain::Brain() {
    for (int i = 0; i < 100; ++i) {
        std::ostringstream oss;
        oss << "Idea " << std::setw(2) << std::setfill('0') << i;
        _ideas[i] = oss.str();
    }
}

Brain::~Brain() {}

Brain::Brain(const Brain& other) {
    for (int i = 0; i < 100; ++i) {
        _ideas[i] = other._ideas[i] + "_copy";
    }
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            _ideas[i] = other._ideas[i] + "_assign";
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
