#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {


    Bureaucrat hermes("Hermes", 1);

    //Form raid("OCaml Piscine Start Form", 35, 23);
    //hermes.signForm(raid);
    //hermes.executeForm(raid);

    ShrubberyCreationForm shrub("Shrub");
    hermes.signForm(shrub);
    hermes.executeForm(shrub);

    RobotomyRequestForm robot("Bender");
    hermes.signForm(robot);
    hermes.executeForm(robot);

    PresidentialPardonForm pardon("OCaml Piscine Start Form");
    hermes.signForm(pardon);
    hermes.executeForm(pardon);


}