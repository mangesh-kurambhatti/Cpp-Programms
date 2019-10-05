#include<iostream>
#include<string>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date( void )
	{
		this->day = 0;
		this->month = 0;
		this->year = 0;
	}
	Date( int day, int month, int year )
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void acceptRecord( void )
	{
		cout<<"Day	:	";
		cin>>this->day;
		cout<<"Month	:	";
		cin>>this->month;
		cout<<"Year	:	";
		cin>>this->year;
	}
	void printRecord( void )
	{
		cout<<this->day<<" / "<<this->month<<" / "<<this->year<<endl;
	}
};
class Employee
{
private:
	string name;	//Association
	int empid;
	float salary;
	Date joinDate;	//Association
public:
	Employee( void ) : empid( 0 ), salary( 0 )
	{	}
	Employee( string name, int empid, float salary, Date joinDate ) : name(name), empid( empid ), salary( salary ), joinDate( joinDate )
	{	}
	Employee( string name, int empid, float salary, int day, int month, int year ) : name(name), empid( empid ), salary( salary ), joinDate( day, month, year )
	{	}
	void acceptRecord( void )
	{
		cout<<"Name	:	";
		cin>>this->name;
		cout<<"Empid	:	";
		cin>>this->empid;
		cout<<"Salary	:	";
		cin>>this->salary;
		this->joinDate.acceptRecord();
	}
	void printRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		cout<<"Empid	:	"<<this->empid<<endl;
		cout<<"Salary	:	"<<this->salary<<endl;
		cout<<"Join Date	:	";
		this->joinDate.printRecord();
	}
};
int main( void )
{
	Employee emp;
	emp.acceptRecord( );
	emp.printRecord( );
	return 0;
}
int main3( void )
{
	Employee emp( "abc", 12, 25000, 12,3,2009 );
	emp.printRecord();
	return 0;
}
int main2( void )
{
	string name("abc");
	int empid = 12;
	float salary = 25000.45f;
	Date joinDate(12,3,2009);

	Employee emp( name, empid, salary, joinDate );
	emp.printRecord();
	return 0;
}
int main1( void )
{
	Employee emp;
	emp.printRecord();
	return 0;
}
