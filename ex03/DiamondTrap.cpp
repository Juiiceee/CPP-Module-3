#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "Default DiamondTrap constructor called\n";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	*this = obj;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return *this;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor called\n";
	this->name = name;
	this->ClapTrap::_name = name + "_clap_name";

	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destruction d'un DiamondTrap\n";
}

void DiamondTrap::whoAmI()
{
	std::cout << "My diamondTrap name is " << this->name << std::endl;
	std::cout << "My clapTrap name is " << this->ClapTrap::_name << std::endl;
}
