#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Clapi("Clapi");
	ScavTrap Clapo("Clapo");
	FragTrap Clapa("Clapa");

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

	Clapa.attack("feur");
	Clapa.beRepaired(50);
	Clapa.highFivesGuys();

}
