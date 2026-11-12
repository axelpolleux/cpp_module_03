#include "ClapTrap.hpp"
#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a = ClapTrap("Gregouin");
	a.currentState();
	for (int i = 0; i < 10; i++)
		a.attack("Loic");
	a.currentState();
	a.attack("Test");
	a.beRepaired(2);
	a.takeDamage(11);
	a.currentState();
	a.takeDamage(1);
	a.attack("Test");
	a.beRepaired(1);
	return 0;
}
