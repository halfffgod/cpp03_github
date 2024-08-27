#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name): _name(name), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << _name << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(): _name("Default"), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "Default ClapTrap  called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Claptrap " << _name << " Is DEAAAD" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &objs){
	std::cout << "Copy constructor called" << std::endl;
	_name = objs._name;
	attack_damage = objs.attack_damage;
	energy_points = objs.energy_points;
	hit_points = objs.hit_points;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &objs){
	if (this != &objs){
		_name = objs._name;
		attack_damage = objs.attack_damage;
		energy_points = objs.energy_points;
		hit_points = objs.hit_points;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target){
	if (hit_points > 0 && energy_points > 0){
		std::cout << "ClapTrap " << _name << " attacks " << target <<" causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else if (hit_points <= 0)
		std::cout << _name << " Does not have enough Hit Points D;" << std::endl;
	else if (energy_points <= 0)
		std::cout << _name << " Does not have enough Energyy D;" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount){
	if (energy_points > 0){
		std::cout << _name  << " got " << amount << " hit points back :D !!" << std::endl;
		hit_points += amount;
		energy_points-=amount;
	}
	else if (hit_points <= 0)
		std::cout << _name << " Does not have enough Hit Points D;" << std::endl;
	else if (energy_points <= 0)
		std::cout << _name << " Does not have enough Energyy D;" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hit_points > 0){
		std::cout << _name << " absorbed " << amount << " damage D: !! " << std::endl;
		hit_points -= amount;
	}
	else if (hit_points <= 0)
		std::cout << _name << " Have 0 health" << std::endl;
}