#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called\n";
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attaqueDamage = obj._attaqueDamage;
	}
	return *this;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << "Creation d'un FragTrap\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attaqueDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Destruction d'un FragTrap\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Ca fait un high fives les gars ?\n";
}
