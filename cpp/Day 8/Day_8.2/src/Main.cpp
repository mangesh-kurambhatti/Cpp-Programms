#include<iostream>
using namespace std;
class Base
{
private:
	int num1;
	int num2;
public:
	Base( void )
	{
		this->num1 = 10;
		this->num2 = 20;
	}
	Base( int num1, int num2 )
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	void showRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};
class Derived : public Base
{
private:
	int num3;
public:
	Derived( void )
	{
		this->num3 = 30;
	}
	Derived( int num1, int num2, int num3 ) : Base(num1, num2)
	{
		this->num3 = num3;
	}
	void printRecord( void )
	{
		Base::printRecord();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
	void displayRecord( void )
	{
		Base::showRecord();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};
int main1( void )
{
	Base base;
	//base.showRecord( );	//Base::showRecord
	//base.printRecord();	//Base::printRecord
	//base.Derived::printRecord();	//Compiler Error
	//base.displayRecord();	//Compiler Error
	return 0;
}
int main2( void )
{
	Base *ptr = new Base( );	//Base::Base()
	//ptr->showRecord();	//Base::showRecord
	//ptr->printRecord();	//Base::printRecord
	//ptr->Derived::printRecord();	//Compiler Error
	//ptr->displayRecord();	//Compiler Error
	delete ptr;	//Base::~Base()
	return 0;
}
int main3( void )
{
	Base b1;
	Base &b2 = b1;	//Base * const b2 = &b1;
	//b2.showRecord( );	//Base::showRecord
	//b2.printRecord();	//Base::printRecord
	//b2.Derived::printRecord();	//Compiler Error
	//b2.displayRecord();	//Compiler Error
	return 0;
}
int main4( void )
{
	Derived derived;
	//derived.showRecord();			//Base::showRecord
	//derived.printRecord();		//Derived::printRecord
	//derived.Base::printRecord();	//Base::printRecord
	//derived.displayRecord();		//Derived::displayRecord
	return 0;
}
int main5( void )
{
	Derived *ptr = new Derived();
	//ptr->showRecord();			//Base::showRecord
	//ptr->printRecord();		//Derived::printRecord
	//ptr->Base::printRecord();	//Base::printRecord
	//ptr->displayRecord();		//Derived::displayRecord
	delete ptr;
	return 0;
}
int main6( void )
{
	Derived d1;
	Derived &d2 = d1;
	//d2.showRecord();			//Base::showRecord
	//d2.printRecord();		//Derived::printRecord
	//d2.Base::printRecord();	//Base::printRecord
	//d2.displayRecord();		//Derived::displayRecord
	return 0;
}
int main7( void )
{
	Base b1(100,200);
	Base b2 = b1;	//Initialization
	b2.printRecord();	//Base::printRecord
	return 0;
}
int main8( void )
{
	Base b1(100,200),b2;
	b2 = b1;	//Assignment
	b2.printRecord();	//Base::printRecord
	return 0;
}
int main9( void )
{
	Derived d1(500,600,700);
	Derived d2 = d1;	//Initialization
	d2.printRecord();	//Derived::printRecord
	return 0;
}
int main10( void )
{
	Derived d1(500,600,700),d2;
	d2 = d1;	//Assignment
	d2.printRecord();	//Derived::printRecord
	return 0;
}
int main11( void )
{
	Base base;
	Derived derived( 500,600,700);
	base = derived;	//OK : Object Slicing
	base.printRecord();	//Base::printRecord --> 500,600
	return 0;
}
int main12( void )
{
	Derived *ptrDerived = new Derived();
	ptrDerived->printRecord();	//Derived::printRecord
	cout<<endl;
	//Base *ptrBase = ( Base* )ptrDerived;	//Upcasting
	Base *ptrBase = ptrDerived;	//Upcasting
	ptrBase->printRecord();
	delete ptrDerived;
	return 0;
}
int main13( void )
{
	Base *ptrBase = new Derived();	//Upcasting
	ptrBase->printRecord();	//Base::printRecord

	Derived *ptrDerived = ( Derived*)ptrBase;//Downcasting
	ptrDerived->printRecord();	//Derived::printRecord

	delete ptrDerived;
	return 0;
}
int main14( void )
{
	Derived d1;
	Derived &d2 = d1;	//Derived *const d2 = &d1;
	d2.printRecord();	//Derived::printRecord
	cout<<endl;

	Base &b2 = d2;	//Upcasting
	b2.printRecord();	//Base::printRecord
	return 0;
}
int main15( void )
{
	Derived d1;
	Base &b1 = d1;	//Upcasting
	b1.printRecord();	//Base::printRecord

	Derived &d2 = (Derived&)b1;	//Downcasting
	d2.printRecord();	//Derived::printRecord
	return 0;
}









