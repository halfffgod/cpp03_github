#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
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