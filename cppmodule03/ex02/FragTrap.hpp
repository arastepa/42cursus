#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap();
		FragTrap(FragTrap const &other);
		FragTrap& operator=(FragTrap const &other);
		~FragTrap();
		void highFivesGuys();
};

#endif