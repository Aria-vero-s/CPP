#include "ClapTrap.hpp"

int main (){
	ClapTrap robot1("RobotOne");
	ClapTrap robot2("RobotTwo");

	std::cout << RED << std::endl;
	robot1.attack(robot2.getName());
	std::cout << CYAN << std::endl;
	
	robot2.takeDamage(3);
	robot2.beRepaired(2);
	robot2.attack(robot1.getName());
	
	std::cout << RED << std::endl;
	robot1.takeDamage(0);
	robot1.attack(robot2.getName());
	std::cout << CYAN << std::endl;

	robot2.beRepaired(4294967295);
	robot2.beRepaired(4294967295);
	robot2.takeDamage(999999999);
	robot2.beRepaired(0);

	std::cout << RESET << std::endl;
	ClapTrap robot3(robot2);

	std::cout << MAGENTA << std::endl;
	ClapTrap robot4 = robot1;

	std::cout << RESET << std::endl;
	robot3.beRepaired(5);

	std::cout << RED << std::endl;
	robot1.attack("");
	std::cout << RESET << std::endl;

	return 0;
}