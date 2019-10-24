#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

	HumanA::HumanA(std::string n, Weapon &w) : _name(n), _weapon(w) {

	}

	HumanA::~HumanA() {

	}
	void HumanA::attack() {
		std::cout << this->_name << this->_weapon.getType(); 
		std::cout << std::endl;
		return;
	}
