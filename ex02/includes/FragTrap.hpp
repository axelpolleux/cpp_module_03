#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap(std::string name_input);
    FragTrap(const FragTrap &other);
    FragTrap& operator=(const FragTrap &other);
    ~FragTrap();

    void    highFivesGuys(void);
};
