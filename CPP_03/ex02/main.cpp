#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main (){
	ScavTrap robot1("RobotOne");
	ScavTrap robot2("RobotTwo");

	std::cout << CYAN << std::endl;
	robot2.takeDamage(5);
	robot2.attack("RobotOne");
	robot2.guardGate();

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

	std::cout << MAGENTA << std::endl;
	ScavTrap robot3(robot2);
	std::cout << RESET << std::endl;
	ScavTrap robot4 = robot1;

	std::cout << MAGENTA << std::endl;
	robot3.beRepaired(5);
	std::cout << RED << std::endl;
	robot1.attack("");

	std::cout << RESET << std::endl;
	FragTrap robot6;
	FragTrap robot7("RobotSeven");
	FragTrap robot8("RobotEight");

	std::cout << CYAN << std::endl;
	robot8.takeDamage(5);
	robot8.attack("RobotSomething");

	//robot6.guardGate();

	std::cout << RED << std::endl;
	robot7.attack(robot8.getName());

	std::cout << MAGENTA << std::endl;
	robot6.takeDamage(3);
	robot6.beRepaired(2);
	robot6.attack(robot7.getName());

	std::cout << RED << std::endl;
	robot7.takeDamage(0);
	robot7.attack(robot8.getName());

	std::cout << CYAN << std::endl;
	robot8.beRepaired(4294967295);
	robot8.beRepaired(4294967295);
	robot8.takeDamage(999999999);
	robot8.beRepaired(0);

	std::cout << RESET << std::endl;
	FragTrap robot9(robot8);
	FragTrap robot10 = robot7;

	robot9.beRepaired(5);

	std::cout << RED << std::endl;
	robot7.attack("");

	std::cout << CYAN << std::endl;
	robot8.highFivesGuys();

	std::cout << RESET << std::endl;
	return 0;
}