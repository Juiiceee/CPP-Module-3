#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap();
	public:
		~FragTrap();
		FragTrap(const FragTrap &obj);
		FragTrap &operator=(const FragTrap &obj);
		FragTrap(std::string str);
		void	highFivesGuys(void);
};
#endif
