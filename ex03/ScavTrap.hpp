#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include <string>

class ScavTrap : virtual public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap &obj);
		ScavTrap &operator=(const ScavTrap &obj);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};
#endif
