#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(const std::string &name);
    ~FragTrap();
    FragTrap(const FragTrap &objs);
    FragTrap &operator=(const FragTrap &objs);
    void highFivesGuys(void);
    void attack(const std::string& target);
};

#endif