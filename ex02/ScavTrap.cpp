#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default Scavtrap have been constructed" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " <<name << " Has been destructed D: !!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout <<"ScavTrap " << name <<  " constructor is built !!" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &objs)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	name = objs.name;
	attack_damage = objs.attack_damage;
	energy_points = objs.energy_points;
	hit_points = objs.hit_points;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &objs) 
{
    if (this != &objs){
		name = objs.name;
		attack_damage = objs.attack_damage;
		energy_points = objs.energy_points;
        hit_points = objs.hit_points;
    }
    return (*this);
}

void ScavTrap::guardGate() 
{
    std::cout << name << " ScavTrap is now in Gate Keeper mode !!" << std::endl;
}

void ScavTrap::attack(const std::string &target) 
{
    if ( hit_points > 0 && energy_points > 0){
		std::cout << "ScavTrap " << name << " attacks " << target <<" causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else if ( hit_points <= 0)
		std::cout << name << " Does not have enough Hit Points D;" << std::endl;
	else if ( energy_points <= 0)
		std::cout << name << " Does not have enough Energyy D;" << std::endl;
}