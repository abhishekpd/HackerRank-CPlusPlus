#include <iostream>
#include "../../header/Classes/BoxIt.h"

BoxIt::Box::Box()
{
	this->m_length = this->m_breadth = this->m_height =  0;
}

BoxIt::Box::Box(int length,int breadth,int heigh) :
		m_length(length), m_breadth(breadth), m_height(heigh)
{
}

int BoxIt::Box::getBreadth() const
{
	return this->m_breadth;
}

int BoxIt::Box::getHeight() const
{
	return this->m_height;
}

int BoxIt::Box::getLength() const
{
	return this->m_length;
}

long long BoxIt::Box::CalculateVolume()
{
	long long volume = this->m_length;
	volume *= this->m_breadth;
	volume *= this->m_height;
	return volume;

	return volume;
}

BoxIt::Box::Box(const BoxIt::Box &box)
{
	m_length =box.getLength() ;
	m_breadth =box.getBreadth() ;
	m_height =box.getHeight() ;
}

bool BoxIt::Box::operator<(const BoxIt::Box& b)
{
	bool m_result= false;

	if(this->m_length < b.getLength())
		m_result = true;
	if( (this->m_breadth < b.getBreadth() ) && (this->m_length == b.getLength() ))
		m_result = true;
	if((this->m_height < b.getHeight() ) && (this->m_length == b.getLength() ) && (this->m_breadth == b.getBreadth() ))
			m_result = true;

	return m_result;
}


std::ostream& BoxIt::operator<<(std::ostream& os, const BoxIt::Box& box)
{
    os << box.getLength() << ' ' << box.getBreadth() << ' ' << box.getHeight();
    return os;
}

void BoxIt::Problem()
{
	int n;
	std::cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		std::cin>>type;
		if(type ==1)
		{
			std::cout<<temp<<std::endl;
		}
		if(type == 2)
		{
			int l,b,h;
			std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			std::cout<<temp<< std::endl;
		}
		if(type==3)
		{
			int l,b,h;
			std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				std::cout<<"Lesser\n";
			}
			else
			{
				std::cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			std::cout<<temp.CalculateVolume()<<std::endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			std::cout<<NewBox<<std::endl;
		}

	}
}
