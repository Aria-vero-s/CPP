#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default", 100, 50, 20, 100) {
	std::cout << "[ScavTrap] default constructor of :" << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20, 100) {
	std::cout << "[ScavTrap] constructor of : " << _name << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "[ScavTrap] destructor of : " << _name << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (_energyPoint <= 0 || _hitPoint <= 0)
		std::cout << this->_name << "[ScavTrap] no more energy or hitpoint !" << std::endl;
	else if (target == "") {
		std::cout << this->_name << "[ScavTrap] cannot attack void target !" << std::endl;
	}
	else if (this->_attackDamage == 0) {
		std::cout << this->_name << "[ScavTrap] cannot attack with 0 attackDamage !" << std::endl;
	}
	else {
		this->_energyPoint--;
		std::cout << this->_name << "[ScavTrap] attack " << target << " causing " << this->_attackDamage  << std::endl;
	}
}

void	ScavTrap::guardGate() const {
	std::cout << "[ScavTrap] " << this->_name << " in guardGate " << std::endl;			
}