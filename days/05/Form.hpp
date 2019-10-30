#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
class	Form;
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(void);
		Form(Form const &instance);
        Form(std::string name, int gradets, int gradeex);
		Form& operator=(const Form &rhs);
		~Form(void);
        virtual std::string getName() const;
        void beSigned(Bureaucrat &cog);
        bool getSign(void) const;
        int getGradeNeeded() const;
        int getGradeNeededEx() const;
        virtual void execute(Bureaucrat & executor) const;
	private:
        std::string target;
        std::string _name;
        bool _signature;
        int _grade_to_sign;
        int _grade_to_execute;

};

std::ostream &operator << (std::ostream &output, Form const &old);
#endif