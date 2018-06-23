#include "../../header/Classes/VirtualFunctions.h"


int VirtualFunctions::Professor::cur_id=0;
int VirtualFunctions::Student::cur_id=0;

VirtualFunctions::Person::~Person()
{
	std::cout << "Destroying Base Class Object  - Person " << std::endl;
}

VirtualFunctions::Professor::~Professor()
{
	std::cout << "Destroying Base Class Object  - Professor " << std::endl;
}
VirtualFunctions::Student::~Student()
{
	std::cout << "Destroying Base Class Object  - Student" << std::endl;
}

void VirtualFunctions::Person::getdata()
{

}

void VirtualFunctions::Person::putdata()
{

}
void VirtualFunctions::Professor::getdata()
{
	std::string m_name;
	int m_publication,age;
	std::cin >> m_name >> age >> m_publication;
	this->age =age;
	this->publication = m_publication;
	this->id = (this->cur_id+1);
	this->name = m_name;
	this->cur_id = this->cur_id + 1 ;

}

void VirtualFunctions::Student::getdata()
{
	std::string m_name;
	int age,marks[6];
	std::cin >> m_name >> age;
	for(int i=0;i<6;i++){
		std::cin >> marks[i];
		this->marks[i]= marks[i];
	}

	this->age =age;
	this->id = (this->cur_id+1);
	this->name = m_name;
	this->cur_id = this->cur_id + 1 ;
}

void VirtualFunctions::Professor::putdata()
{
	std::cout << this->name << " "<<  this->age << " "<< this->publication << " " <<  this->id << std::endl;
}

void VirtualFunctions::Student::putdata()
{
	long int total  =0;
	for(int i=0;i<6;i++)
		total = total + this->marks[i];

	std::cout << this->name << " "<<  this->age << " "<< total << " " <<  this->id << std::endl;
}

void VirtualFunctions::Problem()
{
	int n, val;
		std::cin>>n; //The number of objects that is going to be created.
		Person *per[n];

	for(int i = 0;i < n;i++){
		std::cin>>val;
			if(val == 1){
				// If val is 1 current object is of type Professor
				per[i] = new Professor;
			}
			else per[i] = new Student; // Else the current object is of type Student

			per[i]->getdata(); // Get the data from the user.
		}

	for(int i=0;i<n;i++)
		per[i]->putdata(); // Print the required output for each object
}
