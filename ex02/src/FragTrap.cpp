#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_input) : ClapTrap(name_input){
    std::cout << "FragTrap constructor called" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other){
	std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return (*this);
}

void FragTrap::highFivesGuys() {
    std::cout << "High five guys !" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called {" << this->_name << "}" << std::endl;
}
