#include "ClapTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name_input): _name(name_input), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called {" << this->_name << "}" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy construcor" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

void	ClapTrap::currentState()
{
	std::cout << "========\n";
	std::cout << '{' << this->_name << '}' << std::endl;
	std::cout << "Health: " << this->_hit_points << std::endl;
	std::cout << "Energy: " << this->_energy_points << std::endl;
	std::cout << "Attack: " << this->_attack_damage << std::endl;
	std::cout << "========\n";
}

void ClapTrap::noEnergy(std::string action)
{
	std::cout << "ClapTrap" << this->_name;
	std::cout << " has not enough energy to execute this action: " << action << std::endl;
}

void ClapTrap::printDeath()
{
	std::cout << "ClapTrap " << this->_name << " is dead, it cannot execute any action :-(" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
		printDeath();
	else if (this->_energy_points <= 0)
		noEnergy("attack");
	else
	{
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage" <<  std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0)
		printDeath();
	else if (this->_energy_points <= 0)
		noEnergy("beRepaired");
	else
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_name << " gets repaired, acquiring  " << amount << " hit points" <<  std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
		printDeath();
	else if ((unsigned int)this->_hit_points <= amount)
	{
		this->_hit_points = 0;
		std::cout << "ClapTrap " << this->_name << " is now dead, it took " << amount << " damage points" << std::endl;
	}
	else
	{
		this->_hit_points-= amount;
		std::cout << "ClapTrap " << this->_name << " got attacked, it lost " << amount << " hit points" <<  std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called {" << this->_name << "}" << std::endl;
}
