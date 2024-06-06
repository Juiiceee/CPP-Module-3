#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout << "ScavTrap constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destruction d'un ScavTrap\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
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

void ScavTrap::attack(const std::string& target)
{
		if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " doesn't have enough hit points\n";
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " doesn't have enough energy point\n";
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!\n";
	this->_energyPoints--;
	return;
}
