#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ClapTrap {
    protected :
        std::string _name;
        int _hitPoints;
        int _EnergyPoints;
        int _AttackDamage;
    public:
        ClapTrap(const std::string &name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap (const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &objs);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif