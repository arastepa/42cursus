#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap();
		DiamondTrap(DiamondTrap const &other);
		DiamondTrap& operator=(DiamondTrap const &other);
		void whoami();
		void attack(std::string const &attack);
};


#endif