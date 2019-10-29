#include <iostream>
#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(void)
{
	
}

Bureaucrat::~Bureaucrat(void)
{
	
}
Bureaucrat::Bureaucrat(const Bureaucrat &old)
{
	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{

    if (grade < 1 ||grade > 150)
        std::cout << "exception" << std::endl;
}

void	Bureaucrat::signForm(Form &form)
{
    if (form.getGradeNeeded() >= this->getGrade())
    {
        form.beSigned(*this);
        std::cout << "Signed succesfully" << std::endl;
    }
   else
        std::cout << "Can't be signed" << std::endl;

}

const std::string	Bureaucrat::getName()
{
    return(this->_name);
}

int	Bureaucrat::getGrade()
{
    return(this->_grade);
}

void	Bureaucrat::upGrade()
{
    this->_grade -= 1;
}

void	Bureaucrat::downGrade()
{
    this->_grade += 1;
}