//Weapon.hpp
#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(const std::string &t);
        void    setType(const std::string &t);
        const std::string  &getType() const;
};

#endif