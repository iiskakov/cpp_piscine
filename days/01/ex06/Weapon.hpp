#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H
#include <iostream>

class Weapon {
public:
	Weapon(std::string weapon);
	~Weapon();
	const std::string  &getType();
	void setType(std::string new_type);

private:
	std::string _weapon;
};

#endif
