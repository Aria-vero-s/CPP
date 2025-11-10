#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

	public:
		// default Constructor
		FragTrap();
		// parametized string Constructor
		FragTrap(std::string name);
		// destructor
		~FragTrap();
		void	attack(const std::string& target);
		void	highFivesGuys();
};

#endif