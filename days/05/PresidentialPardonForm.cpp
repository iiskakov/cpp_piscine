#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5)
{
    _target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 72, 45)
{
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &instance)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    _target = rhs._target;
    return *this;
}


void	PresidentialPardonForm::execute(Bureaucrat & executor) const
{
    if (getSign() == true)
        std::cout << _target << " been pardoned by Zaphod Beeblebrox" << std::endl;
    else
        std::cout << "Exception not signed" << std::endl;
    
}