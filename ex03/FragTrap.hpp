#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap();
	public:
		~FragTrap();
		FragTrap(std::string str);
		void	highFivesGuys(void);
};
#endif
