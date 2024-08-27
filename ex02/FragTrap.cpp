#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default")
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) 
{
    std::cout << name << " FragTrap constructor have been called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor have been called , bye bye " << std::endl;
}

FragTrap::FragTrap(const FragTrap &objs)
{
    std::cout << "FragTrap copy constructor have been called for this object" << std::endl;
    name = objs.name;
	attack_damage = objs.attack_damage;
	energy_points = objs.energy_points;
	hit_points = objs.hit_points;
}

FragTrap &FragTrap::operator=(const FragTrap &objs)
{
    std::cout << "FragTrap Assignment operator called" << std::endl;
    if (this != &objs){
        name = objs.name;
		attack_damage = objs.attack_damage;
		energy_points = objs.energy_points;
		hit_points = objs.hit_points;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void) 
{
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}

void FragTrap::attack(const std::string &target) 
{
    if (hit_points > 0 && energy_points > 0){
		std::cout << "FragTrap " << name << " attacks " << target <<" causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else if (hit_points <= 0)
		std::cout << name << " Does not have enough Hit Points D;" << std::endl;
	else if (energy_points <= 0)
		std::cout << name << " Does not have enough Energyy D;" << std::endl;
}