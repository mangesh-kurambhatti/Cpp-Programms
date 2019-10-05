	#include<iostream>
#include<string>
using namespace std;

class Person	//Base class
{
private:
	string name;//24 bytes
	int age;	//4 bytes
public:
	Person( void )
	{
		this->name = "";
		this->age = 0;
	}
	Person( string name, int age )
	{
		this->name = name;
		this->age = age;
	}
	void showRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		cout<<"Age	:	"<<this->age<<endl;
	}
	void printRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		cout<<"Age	:	"<<this->age<<endl;
	}
};
class Employee : public Person	//Derived class
{
private:
	int empid;		//4 bytes
	float salary;	//4 bytes
public:
	Employee( void ) //: Person( )
	{
		this->empid = 0;
		this->salary = 0;
	}
	Employee( string name, int age, int empid, float salary ) : Person( name, age )
	{
		this->empid = empid;
		this->salary = salary;
	}
	void displayRecord( void )
	{
		this->showRecord();
		cout<<"Empid	:	"<<this->empid<<endl;
		cout<<"Salary	:	"<<this->salary<<endl;
	}
	void printRecord( void )
	{
		Person::printRecord( );
		cout<<"Empid	:	"<<this->empid<<endl;
		cout<<"Salary	:	"<<this->salary<<endl;
	}
};
int main( void )
{
	Employee emp("ABC",23,1564,35000);
	//emp.Person::printRecord();
	//emp.Employee::printRecord( );
	emp.printRecord();
	return 0;
}
