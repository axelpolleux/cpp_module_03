#pragma once
#include "ClapTrap.hpp"
#include "../../ex01/includes/ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap& operator=(const FragTrap &other);
    ~FragTrap();
};
