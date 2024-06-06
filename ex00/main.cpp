#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap Clapi("Clapi");
	ClapTrap Clapo("Clapo");

	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	for (int i = 0; i < 9; i++)
		Clapi.takeDamage(1);
	Clapi.takeDamage(3);
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.beRepaired(10);
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");

	Clapo.beRepaired(10);
	Clapo.beRepaired(10);
	Clapo.beRepaired(10);
	Clapo.beRepaired(10);
	Clapo.beRepaired(10);
	Clapo.attack("Clapi");
	Clapo.attack("Clapi");
	Clapo.attack("Clapi");
	Clapo.attack("Clapi");
	Clapo.attack("Clapi");
	Clapo.beRepaired(10);
}
