#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
Form::Form(void)
{
    this->_signature = 0;
}


Form::Form(std::string name, int gradets, int gradeex) : _name(name), _grade_to_sign(gradets), _grade_to_execute(gradeex)
{
    this->_signature = false;
}

Form::Form(Form const &instance)
{	
    *this = instance;
}

Form::~Form(void)
{
	
}

Form &	Form::operator=(const Form &rhs)
{
	_signature = rhs.getSign();
    _name = rhs.getName();
    _grade_to_sign = rhs.getGradeNeeded();
    _grade_to_execute = rhs.getGradeNeededEx();
    return *this;
}

std::string Form::getName() const
{
    return(this->_name);
}

bool	Form::getSign() const
{
    return(this->_signature);
}

int	Form::getGradeNeeded() const
{
    return(this->_grade_to_sign);
}
 
int	Form::getGradeNeededEx() const
{
    return(this->_grade_to_execute);
}
void Form::beSigned(Bureaucrat  &cog) 
{
    if (cog.getGrade() <= this->_grade_to_sign)
       this->_signature = true;
}

void Form::execute(Bureaucrat & executor)
{
        this->beSigned(executor);
}
