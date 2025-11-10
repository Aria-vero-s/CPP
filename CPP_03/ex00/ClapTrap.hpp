#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <climits>

class ClapTrap{
	private:
		std::string _name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;
		int const	_maxHitPoint;

	public:
		// default Constructor
		ClapTrap();
		// parametized string Constructor
		ClapTrap(std::string name);
		// copy constructor
		ClapTrap(const ClapTrap &other);
		// copy assignement operator
		ClapTrap &operator=(const ClapTrap &other);
		// destructor
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string getName() const;
};

#endif