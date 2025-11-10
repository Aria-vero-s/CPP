#include "FragTrap.hpp"

// default Constructor
FragTrap::FragTrap(): ClapTrap("default", 100, 50, 20, 100) {
	std::cout << "[FragTrap] default constructor of :" << this << std::endl;
};
// parametized string Constructor
FragTrap::FragTrap(std::string name):ClapTrap(name, 100, 50, 20, 100) {
	std::cout << "[FragTrap] param constructor of :" << this << std::endl;
}
// destructor
FragTrap::~FragTrap(){
	std::cout << "...[FragTrap] destructor of :" << this << std::endl;
}
void	FragTrap::attack(const std::string& target){
	if (_energyPoint <= 0 || _hitPoint <= 0)
		std::cout << this->_name << "[FragTrap] no more energy or hitpoint !" << std::endl;
	else if (target == "")
	{
		std::cout << this->_name << "[FragTrap] cannot attack void target !" << std::endl;
	}
	else if (this->_attackDamage == 0)
	{
		std::cout << this->_name << "[FragTrap] cannot attack with 0 attackDamage !" << std::endl;
	}
	else
	{
		this->_energyPoint--;
		std::cout << this->_name << "[FragTrap] attack " << target << " causing " << this->_attackDamage  << std::endl;
	}
}
void	FragTrap::highFivesGuys(){
	std::cout << "[FragTrap] " << this->_name << " request a high five !" << std::endl;			
}
