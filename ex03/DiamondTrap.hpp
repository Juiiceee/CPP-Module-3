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
	public:
		DiamondTrap();
		DiamondTrap(std::string str);
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap &operator=(const DiamondTrap &obj);
		void whoAmI();
		~DiamondTrap();
};
#endif
