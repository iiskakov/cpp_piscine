#include <iostream>
#include "Person.class.hpp"

Person::Person(void) {

	
	std::cout << "New person created" << std::endl;

}	

Person::~Person(void) {

	std::cout << "Fin." << std::endl;
}

void Person::fill_info(void) {

	std::cout << "Enter first name:";
	std::cin >> this->_first_name;
	std::cout << "Enter lastname:";
	std::cin >> this->_last_name;
	std::cout << "Enter nickname:";
	std::cin >> this->_nickname;
	std::cout << "Enter login:";
	std::cin >> this->_login;
	std::cout << "Enter postal:";
	std::cin >> this->_postal;
	std::cout << "Enter address:";
	std::cin >> this->_address;
	std::cout << "Enter email_address:";
	std::cin >> this->_email_address;
	std::cout << "Enter phone_number:";
	std::cin >> this->_phone_number;
	std::cout << "Enter birthday_date:";
	std::cin >> this->_birthday_date;
	std::cout << "Enter favoritemeal:";
	std::cin >> this->_favoritemeal;
	std::cout << "Enter underwear_color:";
	std::cin >> this->_underwear_color;
	std::cout << "Enter darkest_secret:";
	std::cin >> this->_darkest_secret;
}

void Person::get_first_name(void) {
 
 	std::cout << this->_first_name << std::endl;
 }

void Person::get_last_name(void) {
	std::cout << this->_last_name << std::endl;
}

void Person::get_nickname(void) {
	std::cout << this->_nickname << std::endl;
	}
	
void Person::get_login(void) {
	std::cout << this->_login << std::endl;
}
void Person::get_postal(void) {
	std::cout << this->_postal << std::endl;
}
void Person::get_address(void) {
	std::cout << this->_address << std::endl;
}
void Person::get_email_address(void) {
	std::cout << this->_email_address << std::endl;
}
void Person::get_phone_number(void) {
	std::cout << this->_phone_number << std::endl;
}
void Person::get_birthday_date(void) {
	std::cout << this->_birthday_date << std::endl;
}
void Person::get_favoritemeal(void) {
	std::cout << this->_favoritemeal << std::endl;
}
void Person::get_underwear_color(void) {
	std::cout << this->_underwear_color << std::endl;
}
void Person::get_darkest_secret(void) {
	std::cout << this->_darkest_secret << std::endl;
}
void Person::get_full_info(void) {

	get_first_name();
	get_last_name();
	get_nickname();
	get_login();
	get_postal();
	get_address();
	get_email_address();
	get_phone_number();
	get_birthday_date();
	get_favoritemeal();
	get_underwear_color();
	get_darkest_secret();

}

