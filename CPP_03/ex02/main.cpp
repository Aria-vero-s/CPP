#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main (){
	ScavTrap robot1("RobotOne");
	ScavTrap robot2("RobotTwo");

	robot2.takeDamage(5);
	robot2.attack("RobotOne");

	robot2.guardGate();

	robot1.attack(robot2.getName());
	
	robot2.takeDamage(3);
	robot2.beRepaired(2);
	robot2.attack(robot1.getName());
	
	robot1.takeDamage(0);
	robot1.attack(robot2.getName());

	robot2.beRepaired(4294967295);
	robot2.beRepaired(4294967295);
	robot2.takeDamage(999999999);

	robot2.beRepaired(0);

	ScavTrap robot3(robot2);
	ScavTrap robot4 = robot1;

	robot3.beRepaired(5);
	robot1.attack("");

	FragTrap robot6;
	FragTrap robot7("RobotSeven");
	FragTrap robot8("RobotEight");

	robot8.takeDamage(5);
	robot8.attack("RobotSomething");

	//robot6.guardGate();

	robot7.attack(robot8.getName());

	robot6.takeDamage(3);
	robot6.beRepaired(2);
	robot6.attack(robot7.getName());

	robot7.takeDamage(0);
	robot7.attack(robot8.getName());

	robot8.beRepaired(4294967295);
	robot8.beRepaired(4294967295);
	robot8.takeDamage(999999999);

	robot8.beRepaired(0);

	FragTrap robot9(robot8);
	FragTrap robot10 = robot7;

	robot9.beRepaired(5);
	robot7.attack("");
	robot8.highFivesGuys();
	return 0;
}