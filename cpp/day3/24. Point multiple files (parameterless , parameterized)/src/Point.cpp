#include<iostream>
using namespace std;
#include"../include/Point.h"
using namespace NPoint;

// defination of all member function of Point class

// return_type className:: MemberfunName(datatype parameter)
	Point:: Point() //1
	{
		this->xPosition=100;
		this->yPosition=200;
		cout<<"inside parameterless ctor of Point class"<<endl;
	}
	Point::Point(int value) //2
	{
		this->xPosition=value;
		this->yPosition=value;
		cout<<"inside one parameter ctor of Point class"<<endl;
	}
	Point:: Point(int xposition, int yposition) //2
	{
		this->xPosition=xposition;
		this->yPosition=yposition;
		cout<<"inside two parameter ctor of Point class"<<endl;
	}
	int Point::GetXPosition() const
	{
		return this->xPosition;
	}
	int Point::GetYPosition() const
	{
		return this->yPosition;
	}
	void Point::SetXPosition(int xposition)
	{
		this->xPosition=xposition;
	}
	void Point::SetYPosition(int yposition)
	{
		this->yPosition=yposition;
	}
	void Point::AcceptInputFromConsole()
	{
		cout<<"Enter xPosition :: ";
		cin>>this->xPosition;
		cout<<"Enter yPosition :: ";
		cin>>this->yPosition;
	}
	void Point:: PrintOutputOnConsole()const
	{
		cout<<" this->xPosition :: "<<this->xPosition<<endl;
		cout<<" this->yPosition :: "<<this->yPosition<<endl;
	}

	 Point::~Point()
	{
		this->xPosition=0;
		this->yPosition=0;
		cout<<"inside dtor of Point class"<<endl;
	}


