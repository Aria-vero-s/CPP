#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main (){
	ClapTrap test("test");
	ScavTrap robot0;
	ScavTrap robot1("M. Clapi");
	ScavTrap robot2("Mme Rainette");

	robot2.takeDamage(5);
	robot2.attack("Robot");

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

	std::cout << "---------------------FRAGTRAP TESTS---------------------" << std::endl;

	FragTrap robot10;
	FragTrap robot11("M. Clapi");
	FragTrap robot12("Mme Rainette");

	robot12.takeDamage(5);
	robot12.attack("Robot");

	//robot10.guardGate();

	robot11.attack(robot12.getName());

	robot10.takeDamage(3);
	robot10.beRepaired(2);
	robot10.attack(robot11.getName());

	robot11.takeDamage(0);
	robot11.attack(robot12.getName());

	robot12.beRepaired(4294967295);
	robot12.beRepaired(4294967295);
	robot12.takeDamage(999999999);

	robot12.beRepaired(0);

	FragTrap robot13(robot12);
	FragTrap robot14 = robot11;

	robot13.beRepaired(5);
	robot11.attack("");
	robot12.highFivesGuys();
	return 0;

}