#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout << "Creation d'un ScavTrap\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attaqueDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destruction d'un ScavTrap\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " doesn't have enough energy point\n";
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attaqueDamage << " points of damage!\n";
	this->_energyPoints--;
	return;
}
