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
	Clapi.attack("Clapo");
	Clapi.attack("Clapo");
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
