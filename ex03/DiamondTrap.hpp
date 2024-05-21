#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
		DiamondTrap();
	public:
		DiamondTrap(std::string str);
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap &operator=(const DiamondTrap &obj);
		~DiamondTrap();
};
#endif
