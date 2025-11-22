#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "Default Constructor" << std::endl;
}

void    Zombie::announce() {
    std::cout << "Zombie: " << name << std::endl;
}

void    Zombie::setName(std::string n) {
    name = n;
}