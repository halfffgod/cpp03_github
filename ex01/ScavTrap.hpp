#include "ClapTrap.hpp"
#include <iostream>
class ScavTrap : public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &objs);
        ScavTrap &operator=(const ScavTrap &objs);

        void guardGate();
        void attack(const std::string& target);
};