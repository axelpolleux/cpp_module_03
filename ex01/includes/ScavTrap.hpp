#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(ScavTrap const &other);
	ScavTrap	&operator=(ScavTrap const &other);
	~ScavTrap();

	void	guardGate();
};
