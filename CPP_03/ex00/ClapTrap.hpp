#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <climits>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"

class ClapTrap{
	private:
		std::string _name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;
		int const	_maxHitPoint;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string getName() const;
};

#endif