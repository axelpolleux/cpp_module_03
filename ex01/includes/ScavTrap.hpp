#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name_input);
	ScavTrap(ScavTrap const &other);
	ScavTrap	&operator=(ScavTrap const &other);
	~ScavTrap();

	void	guardGate();
};
