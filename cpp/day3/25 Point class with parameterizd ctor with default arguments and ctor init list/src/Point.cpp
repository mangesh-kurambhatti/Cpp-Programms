#include<iostream>
using namespace std;
#include"../include/Point.h"
using namespace NPoint;

// defination of all member function of Point class

// return_type className:: MemberfunName(datatype parameter)

	// way1 parameterized ctor with default arguments
	/*Point:: Point(int xposition, int yposition)
	{
		this->xPosition=xposition;
		this->yPosition=yposition;
		cout<<"inside parameterized ctor with default arguments  of Point class"<<endl;
	}*/

	//way2	parameterized ctor with default arguements with ctor int list
	Point::Point(int xposition, int yposition):xPosition(xposition), yPosition(yposition)
	{
	 cout<<"inside parameterized ctor with default arguments with ctor init list  of Point class"<<endl;
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


