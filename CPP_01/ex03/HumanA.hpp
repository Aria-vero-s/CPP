// HumanA.hpp
#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon  &weapon;
    public:
        HumanA(const std::string &n, Weapon &w);
        void    attack() const;
};

#endif