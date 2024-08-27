#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default"){
    std::cout << "Default FragTrap constructor called" << std::endl;
    _hitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    std::cout << name << " FragTrap constructor have been called" << std::endl;
    _hitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor have been called , bye bye " << std::endl;
}

FragTrap::FragTrap(const FragTrap &objs){
    std::cout << "FragTrap copy constructor have been called for this object" << std::endl;
    _name = objs._name;
	_AttackDamage = objs._AttackDamage;
	_EnergyPoints = objs._EnergyPoints;
	_hitPoints = objs._hitPoints;
}

FragTrap &FragTrap::operator=(const FragTrap &objs){
    std::cout << "FragTrap Assignment operator called" << std::endl;
    if (this != &objs){
        _name = objs._name;
		_AttackDamage = objs._AttackDamage;
		_EnergyPoints = objs._EnergyPoints;
		_hitPoints = objs._hitPoints;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (_hitPoints > 0 && _EnergyPoints > 0){
		std::cout << "FragTrap " << _name << " attacks " << target <<" causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout << _name << " Does not have enough Hit Points D;" << std::endl;
	else if (_EnergyPoints <= 0)
		std::cout << _name << " Does not have enough Energyy D;" << std::endl;
}