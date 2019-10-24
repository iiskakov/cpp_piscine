#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

	HumanB::HumanB(std::string n) : _name(n) {

	}

	HumanB::~HumanB() {

	}
	void HumanB::setWeapon(Weapon &new_weapon) {
		this->_weapon = &new_weapon;
	}
	void HumanB::attack() {
		std::cout << this->_name << this->_weapon->getType(); 
		std::cout << std::endl;
		return;
	}
