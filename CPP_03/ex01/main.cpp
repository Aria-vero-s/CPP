#include "ScavTrap.hpp"

int main (){
	ScavTrap robot0;
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

	{
		ScavTrap robot3(robot2);
		ScavTrap robot4 = robot1;
	
		robot3.beRepaired(5);
		robot1.attack("");
		std::cout << "robot3 name : " << robot3.getName() << std::endl;
		std::cout << "robot4 name : " << robot4.getName() << std::endl;
	}
	std::cout << "robot2 name : " << robot2.getName() << std::endl;
	std::cout << "robot1 name : " << robot1.getName() << std::endl;	

	return 0;
}