#include "../header/Classes.h"

void ClassesChallenges::ProblemsMenu()
{
	int m_choice;
	system("clear");
	std::cout << "1) Structs" << std::endl;
	std::cout << "2) Class" << std::endl;
	std::cout << "3) Class and Objects" << std::endl;
	std::cin >> m_choice;

	switch(m_choice)
	{
		case 1:
			ClassesChallenges::Structs();
			break;
		case 2:
			ClassesChallenges::Class();
			break;
		case 3:
			//ClassesChallenges::AttributeParser();
			break;
		default:
			break;
	}
}


void ClassesChallenges::Structs()
{
	Student st;
	std::cout << "Please enter student age, name ,lastname and standard separated by enter" << std::endl;
	std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
	std:: cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
}


void ClassesChallenges::Class()
{
	 int age, standard;
	 std::string first_name, last_name;

	 std::cout << "Please enter student age, name ,lastname and standard separated by enter" << std::endl;
	 std::cin >> age >> first_name >> last_name >> standard;

	Student2 st;
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

void Student2::set_age(int age)
{
	this->m_age =	age;
}

void Student2::set_standard(int standard)
{
	this->m_standard =	standard;
}

void Student2::set_first_name(std::string fName)
{
	this->m_first_name =	fName;
}

void Student2::set_last_name(std::string lName)
{
	this->m_last_name = lName;
}


int Student2::get_age()
{
	return this->m_age;
}

int Student2::get_standard()
{
	return this->m_standard;
}

std::string Student2::get_first_name()
{
	return this->m_first_name;
}

std::string Student2::get_last_name()
{
	return this->m_last_name;
}

std::string Student2::to_string()
{
	std:: string m_to_string = std::to_string(this->m_age) + "," + this->m_first_name + "," + this->m_last_name + "," + std::to_string(this->m_standard);
	return m_to_string;
}
