#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &instance);
		Intern &operator=(Intern const &rhs);
		~Intern(void);
        Form *makeForm(std::string name, std::string target_name);

	private:

};

#endif