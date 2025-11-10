#include "ScavTrap.hpp"


// default Constructor
ScavTrap::ScavTrap(): ClapTrap("default", 100, 50, 20, 100) {
	std::cout << "[ScavTrap] default constructor of :" << this << std::endl;
};
// parametized string Constructor
ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20, 100) {
	std::cout << "[ScavTrap] constructor of :" << this << std::endl;
}
// destructor
ScavTrap::~ScavTrap(){
	std::cout << "...[ScavTrap] destructor of :" << this << std::endl;
}
void	ScavTrap::attack(const std::string& target){
	if (_energyPoint <= 0 || _hitPoint <= 0)
		std::cout << this->_name << "[ScavTrap] no more energy or hitpoint !" << std::endl;
	else if (target == "")
	{
		std::cout << this->_name << "[ScavTrap] cannot attack void target !" << std::endl;
	}
	else if (this->_attackDamage == 0)
	{
		std::cout << this->_name << "[ScavTrap] cannot attack with 0 attackDamage !" << std::endl;
	}
	else
	{
		this->_energyPoint--;
		std::cout << this->_name << "[ScavTrap] attack " << target << " causing " << this->_attackDamage  << std::endl;
	}
}
// new function
void	ScavTrap::guardGate(){
	std::cout << "[ScavTrap] " << this->_name << " in guardGate " << std::endl;			
}
