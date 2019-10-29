#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

    srand(time(0));

    Bureaucrat hermes("Hermes", 36);

    Form raid("OCaml Piscine Start Form", 35, 23);
    hermes.signForm(raid);
    std::cout << hermes.getGrade() << std::endl;

    RobotomyRequestForm shrub("OCaml Piscine Start Form");
    hermes.signForm(shrub);
    shrub.execute(hermes);
    std::cout << hermes.getGrade() << std::endl;




}