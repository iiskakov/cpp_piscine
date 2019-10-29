#include <iostream>
#include "Person.class.hpp"

void add_new ( Person *book ) {

	static int i = 0;
	if (i <= 7)
		book[i].fill_info();
	else
		std::cout << "Sorry, I don't have memory anymore... bzzz...." << std::endl;
	i++;

}
int main ( void ) {

	Person *persons=new Person[8];

	while (true)
		add_new(persons);
	add_new(persons);
	persons[0].get_full_info();
	persons[1].get_full_info();

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
