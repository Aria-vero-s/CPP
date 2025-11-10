#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public:
		// default Constructor
		ScavTrap();
		// parametized string Constructor
		ScavTrap(std::string name);
		// destructor
		~ScavTrap();
		void	attack(const std::string& target);
		// new function
		void	guardGate();
};
#endif