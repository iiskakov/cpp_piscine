#ifndef HUMAN_A_CLASS_H
# define HUMAN_A_CLASS_H
#include "Weapon.hpp"
#include <iostream>

class HumanA {

public:
	HumanA(std::string, Weapon& ); 
	~HumanA();
	void attack();

private:
	std::string _name;
	Weapon& _weapon;
};

#endif
