#pragma once
#include <string>
class ClapTrap
{
private:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

	void		noEnergy(std::string action);
	void		printDeath();
public:
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	currentState();

	ClapTrap(std::string name_input);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap &other);
	~ClapTrap();
};