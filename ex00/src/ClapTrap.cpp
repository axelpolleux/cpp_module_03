#include "ClapTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name_input): _name(name_input), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default construcor" << std::endl;
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

void	ClapTrap::currentState()
{
	std::cout << "========\n";
	std::cout << this->_name << '\n';
	std::cout << "Health: " << this->_hit_points << '\n';
	std::cout << "Energy: " << this->_energy_points << '\n';
	std::cout << "Attack: " << this->_attack_damage << '\n';
	std::cout << "========\n";
}

void ClapTrap::noEnergy(std::string action)
{
	std::cout << "ClapTrap" << this->_name;
	std::cout << " has not enough energy to execute this action: " << action << '\n';
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points <= 0)
		noEnergy("attack");
	_energy_points--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage" <<  std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
		noEnergy("beRepaired");
	std::cout << "ClapTrap " << this->_name << " gets repaired, acquiring  " << amount << " hit points" <<  std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energy_points <= 0)
		noEnergy("takeDamage");
	std::cout << "ClapTrap " << this->_name << " got attacked, it lost " << amount << " hit points" <<  std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor" << std::endl;
}
