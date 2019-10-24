#ifndef HUMAN_B_CLASS_H
# define HUMAN_B_CLASS_H
#include "Weapon.hpp"
#include <iostream>

class HumanB {

public:
	HumanB(std::string); 
	~HumanB();
	void setWeapon(Weapon &);
	void attack();

private:
	std::string _name;
	Weapon* _weapon;
};

#endif
