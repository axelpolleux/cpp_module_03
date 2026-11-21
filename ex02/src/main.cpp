#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	// ClapTrap
	ClapTrap	a = ClapTrap("Big Gregouin");
	a.currentState();
	a.takeDamage(1);
	a.attack("Test");
	a.beRepaired(1);
	// a.highFivesGuys();
	a.currentState();

	// FragTrap
	FragTrap	b = FragTrap("Little Gregouin");
	FragTrap c(b);
	c.currentState();
	c.takeDamage(1);
	c.attack("Test");
	c.beRepaired(1);
	c.takeDamage(120);
	c.attack("Impossible ennemy");
	c.highFivesGuys();
	c.currentState();
	return 0;
}
