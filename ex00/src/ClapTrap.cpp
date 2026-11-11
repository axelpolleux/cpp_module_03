#include "ClapTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name_input): _name(name_input), _hit_points(10), _energy_points(10), _attack_damage(cout << "Default construcor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy construcor" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	(void)other;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{

}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor" << std::endl;
}
