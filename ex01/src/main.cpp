#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	// ClapTrap
	ClapTrap	a = ClapTrap("Big Gregouin");
	a.currentState();
	a.takeDamage(1);
	a.attack("Test");
	a.beRepaired(1);
	// a.guardGate();
	a.currentState();

	// ScavTrap
	ScavTrap	b = ScavTrap("Little Gregouin");
	b.currentState();
	b.takeDamage(1);
	b.attack("Test");
	b.beRepaired(1);
	b.guardGate();
	b.currentState();
	return 0;
}
