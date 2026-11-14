#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"

ScavTrap::ScavTrap()
{
		std::cout << "ScavTrap constructor called" << std::endl;
}

void ScavTrap::guardGate()
{
}

ScavTrap::ScavTrap(ScavTrap const& other)
{
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_attack_damage = other._attack_damage;
		this->_energy_points = other._energy_points;
		this->_hit_points = other._hit_points;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}