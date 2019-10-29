#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137)
{
    _target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137)
{
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &instance)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    _target = rhs._target;
    return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat & executor)
{
    std::ofstream	os(_target + "_shrubbery");
			if (os)
			{
				os << "                     .o00o" << std::endl
				<< "                   o000000oo" << std::endl
				<< "                  00000000000o" << std::endl
				<< "                 00000000000000" << std::endl
				<< "              oooooo  00000000  o88o" << std::endl
				<< "           ooOOOOOOOoo  ```''  888888" << std::endl
				<< "         OOOOOOOOOOOO'.qQQQQq. `8888'" << std::endl
				<< "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'" << std::endl
				<< "        OOOOOOOOOO'.QQQQQQQQQQ/ /q" << std::endl
				<< "         OOOOOOOOO QQQQQQQQQQ/ /QQ" << std::endl
				<< "           OOOOOOOOO `QQQQQQ/ /QQ'" << std::endl
				<< "             OO:F_P:O `QQQ/  /Q'" << std::endl
				<< "                \\\\. \\ |  // |" << std::endl
				<< "                d\\ \\\\\\|_////" << std::endl
				<< "                qP| \\\\ _' `|Ob" << std::endl
				<< "                   \\  / \\  \\Op" << std::endl
				<< "                   |  | O| |" << std::endl
				<< "           _       /\\. \\_/ /\\" << std::endl
				<< "            `---__/|_\\\\   //|  __" << std::endl
				<< "                  `-'  `-'`-'-'" << std::endl;
			}
			os.close();
}