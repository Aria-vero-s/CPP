//Weapon.hpp
#include "Weapon.hpp"

Weapon::Weapon(const std::string &t) {
    type = t;
}
void    Weapon::setType(const std::string &t) {
    type = t;
}
const std::string  &Weapon::getType() const {
    return(type);
};