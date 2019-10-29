#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _weapon(weapon)
{
	return;
}

Weapon::~Weapon() 
{
	return;
}

const std::string &Weapon::getType() 
{
	return (this->_weapon);
}
void Weapon::setType(std::string new_type) {
	
	this->_weapon = new_type;
	return;
}
		





