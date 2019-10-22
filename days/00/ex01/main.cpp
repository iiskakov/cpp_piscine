#include <iostream>
#include "Person.class.hpp"

int main ( void ) {

	Person *persons=new Person[8];
	

	persons[1].fill_info();

	persons[1].get_full_info();
//	inst.get_first_name();
	return 0;

}







// void search( Person * phonebook ) {
// 
// 	char *name_to_find;
// 
// 	for i++; i = 0; i < strlen(phonebook)
// 		display_short(phonebook[i];
// 	std::cout << "Enter a name for full info" << std::enld;
// 	std:cin >> name_to_find;
// 	
// 	
// 	for i++; i = 0; i < strlen(phonebook)
// 		if (phonebook[i]->name == name_to_find)
// 			display_full(phonebook[i]);
// 
// 	}
