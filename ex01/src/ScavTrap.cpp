#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name_input) : ClapTrap(name_input) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other) {
    *this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_attack_damage = other._attack_damage;
        this->_energy_points = other._energy_points;
        this->_hit_points = other._hit_points;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points <= 0)
        printDeath();
    else if (this->_energy_points <= 0)
        noEnergy("attack");
    else
    {
        this->_energy_points--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage" <<  std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << this->_name << " ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}
