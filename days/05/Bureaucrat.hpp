#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
class	Bureaucrat;
# include "Form.hpp"


class	Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &old);
	Bureaucrat& operator = (const Bureaucrat &old);
	~Bureaucrat(void);

	void signForm(Form &form);
	const std::string getName();
	int getGrade();
	void upGrade();
	void downGrade();
};

std::ostream &operator << (std::ostream &output, Bureaucrat const &old);

#endif
