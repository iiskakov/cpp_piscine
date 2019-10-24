#ifndef PERSON_CLASS_H
# define PERSON_CLASS_H

class Person  {

public:

	Person(void);
	~Person (void);

	void get_full_info(void);
	void fill_info(void);
	void get_first_name();
	void get_last_name();
	void get_nickname();
	void get_login();
	void get_postal();
	void get_address();
	void get_email_address();
	void get_phone_number();
	void get_birthday_date();
	void get_favoritemeal();
	void get_underwear_color();
	void get_darkest_secret();

private:

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal;
	std::string _address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favoritemeal;
	std::string _underwear_color;
	std::string _darkest_secret;

};

#endif
