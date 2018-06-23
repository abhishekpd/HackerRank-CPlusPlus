#include "../../header/Classes/Class.h"

void Class::Student::set_age(int age)
{
	this->m_age =	age;
}

void Class::Student::set_standard(int standard)
{
	this->m_standard =	standard;
}

void Class::Student::set_first_name(std::string fName)
{
	this->m_first_name =	fName;
}

void Class::Student::set_last_name(std::string lName)
{
	this->m_last_name = lName;
}

int Class::Student::get_age()
{
	return this->m_age;
}

int Class::Student::get_standard()
{
	return this->m_standard;
}

std::string Class::Student::get_first_name()
{
	return this->m_first_name;
}

std::string Class::Student::get_last_name()
{
	return this->m_last_name;
}

std::string Class::Student::to_string()
{
	std:: string m_to_string = std::to_string(this->m_age) + "," + this->m_first_name + "," + this->m_last_name + "," + std::to_string(this->m_standard);
	return m_to_string;
}

void Class::Problem()
{
	 int age, standard;
	 std::string first_name, last_name;

	 std::cout << "Please enter student age, name ,lastname and standard separated by enter" << std::endl;
	 std::cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	std::cout << st.get_age() << "\n";
	std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	std::cout << st.get_standard() << "\n";
	std::cout << "\n";
	std::cout << st.to_string();

}
