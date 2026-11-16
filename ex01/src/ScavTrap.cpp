#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name_input) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_name = name_input;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

void ScavTrap::guardGate() {
}

ScavTrap::ScavTrap(ScavTrap const &other) {
    *this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_attack_damage = other._attack_damage;
        this->_energy_points = other._energy_points;
        this->_hit_points = other._hit_points;
    }
}

ScavTrap::guardGate() {

}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}
