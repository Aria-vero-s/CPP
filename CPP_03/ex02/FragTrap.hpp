#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"

class FragTrap : public ClapTrap{

	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void	attack(const std::string& target);
		void	highFivesGuys() const;
};

#endif