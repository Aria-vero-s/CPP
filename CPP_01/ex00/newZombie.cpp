#include "Zombie.hpp"

Zombie* newZombie(std::string n) {
    Zombie *ptr;
    ptr = new Zombie(n);
    return (ptr);
}