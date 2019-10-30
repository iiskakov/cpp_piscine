#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45)
{
    _target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45)
{
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &instance)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    _target = rhs._target;
    return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat & executor) const
{
    srand(time(0));
    int chance;
    std::cout << "*buzzing noises*" << std::endl;
    chance = rand() % 100;
    if (chance > 50)
        std::cout << _target << " was robotomized succesfully" << std::endl;
    else
        std::cout << "failure" << std::endl;
}