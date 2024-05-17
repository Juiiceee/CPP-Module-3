#include "FragTrap.hpp"

FragTrap::FragTrap()
{

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
