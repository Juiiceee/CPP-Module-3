#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap Clapi("Clapi");
	ScavTrap Clapo("Clapo");

	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	for (int i = 0; i < 10; i++)
		Clapi.takeDamage(1);
	Clapi.attack("Clapo");
	Clapo.attack("Clapi");
	for (int i = 0; i < 9; i++)
		Clapo.takeDamage(10);
	Clapo.takeDamage(12);
	Clapo.attack("Clapi");
	Clapi.beRepaired(10);
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");

	Clapo.attack("feur");
	Clapo.beRepaired(50);
	Clapo.guardGate();

}
