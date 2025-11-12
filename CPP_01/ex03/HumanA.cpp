// HumanA.cpp
#include "HumanA.hpp"

HumanA::HumanA(std::string const &n, Weapon &w) : name(n), weapon(w) {}

void    HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}