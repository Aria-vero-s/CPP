#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0), _maxHitPoint(_hitPoint){
	std::cout << "default constructor of :" << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0), _maxHitPoint(_hitPoint){
	std::cout << "constructor of :" << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack, int maxHit) : _name(name), _hitPoint(hit), _energyPoint(energy), _attackDamage(attack), _maxHitPoint(maxHit){
	std::cout << "[ClapTrap] param constructor of :" << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name),  _hitPoint(other._hitPoint), _energyPoint(other._energyPoint), _attackDamage(other._attackDamage), _maxHitPoint(other._maxHitPoint){
	std::cout << _name << " copy constructor of : " << &other << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	std::cout << this << " copy assignement operator of :" << &other << std::endl;
	if (this != &other){
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "destructor of :" << _name << std::endl;
}

void	ClapTrap::attack(const std::string& target){
	if (_energyPoint <= 0 || _hitPoint <= 0)
		std::cout << this->_name << " no more energy or hitpoint !" << std::endl;
	else if (target == "") {
		std::cout << this->_name << " cannot attack void target !" << std::endl;
	}
	else if (this->_attackDamage == 0) {
		std::cout << this->_name << " cannot attack with 0 attackDamage !" << std::endl;
	}
	else {
		this->_energyPoint--;
		std::cout << this->_name << " attack " << target << " causing " << this->_attackDamage  << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (amount < (unsigned int)this->_hitPoint) {
		this->_hitPoint -= amount;
	}
	else {
		this->_hitPoint = 0;
	}
	std::cout << this->_name << " take " << amount << " damage ! Current hitPoint: " << this->_hitPoint << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoint == 0 || _hitPoint == 0 || amount == 0)
		std::cout << this->_name << " no more energy or hitpoint or cannot be repaired by 0 hitPoint !" << std::endl;
	else {
		long unsigned int temp;
		temp = (long unsigned int)amount + (long unsigned int)this->_hitPoint;
		this->_energyPoint--;
		if (temp < (unsigned int)this->_maxHitPoint){
			std::cout << this->_name << " Repaired " << amount << " hitPoint." << std::endl;
			this->_hitPoint += amount;
			std::cout << this->_name << " current hitPoint: " << this->_hitPoint << std::endl;
		}
		else {
			this->_hitPoint = this->_maxHitPoint;
			std::cout << this->_name << " regained max hitPoints. Current hitPoint: " << this->_hitPoint << std::endl;
		}

	}
}

std::string ClapTrap::getName() const {
	return this->_name;
}