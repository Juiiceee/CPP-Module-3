#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{

}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{

}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{

}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "Creation d'un DiamondTrap\n";
	this->name = name;
	this->ClapTrap::_name = name + "_clap_name";

	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attaqueDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destruction d'un DiamondTrap\n";
}
