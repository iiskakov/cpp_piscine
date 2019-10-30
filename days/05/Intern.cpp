# include <iostream>
# include "Intern.hpp"
# include "RobotomyRequestForm.hpp"

	Intern::Intern()
    {

    }
	Intern::Intern(Intern const &instance)
    {

    }
	Intern &Intern::operator=(Intern const &rhs)
    {

    }
	Intern::~Intern(void)
    {

    }
    void *Intern::makeForm(std::string name, std::string target_name)
    {
        if (name == "robotomy request")
            RobotomyRequestForm *our_form = new(RobotomyRequestForm);
        return our_form;
    }


};