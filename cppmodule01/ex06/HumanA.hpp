#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		Weapon &weapon;
		std::string name;
	public:
		HumanA(std:: string name, Weapon &weapon);
		void attack();

		
};

#endif