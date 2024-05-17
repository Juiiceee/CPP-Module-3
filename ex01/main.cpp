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
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
	Clapi.beRepaired(10);
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");

	Clapo.attack("feur");
	Clapo.beRepaired(50);
	Clapo.guardGate();

}
