#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &instance);
		Intern &operator=(Intern const &rhs);
		~Intern(void);
        void *makeForm(std::string name, std::string target_name);

	private:

};

#endif