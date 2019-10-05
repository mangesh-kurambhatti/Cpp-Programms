#pragma pack(1)
#include<iostream>
using namespace std;
class Base
{
private:
	//v-ptr
	int num1;
	int num2;
public:
	Base( void )
	{
		this->num1 = 10;
		this->num2 = 20;
	}
	virtual void f1( void )
	{
		cout<<"Base::f1"<<endl;
	}
	virtual void f2( void )
	{
		cout<<"Base::f2"<<endl;
	}
	virtual void f3( void )
	{
		cout<<"Base::f3"<<endl;
	}
	void f4( void )
	{
		cout<<"Base::f4"<<endl;
	}
	void f5( void )
	{
		cout<<"Base::f5"<<endl;
	}
	virtual ~Base( )
	{	}
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
	virtual void f1( void )
	{
		cout<<"Derived::f1"<<endl;
	}
	void f2( void )
	{
		cout<<"Derived::f2"<<endl;
	}
	void f4( void )
	{
		cout<<"Derived::f4"<<endl;
	}
	virtual void f5( void )
	{
		cout<<"Derived::f5"<<endl;
	}
	virtual void f6( void )
	{
		cout<<"Derived::f6"<<endl;
	}
};
int main( void )
{
	Base *ptr = new Derived( );	//Upcasting

	return 0;
}
int main1( void )
{
	Base b;
	//b.f1();	//Base::f1 --> Early Binding
	//b.f2();	//Base::f2 --> Early Binding
	//b.f3();	//Base::f3 --> Early Binding
	//b.f4();	//Base::f4 --> Early Binding
	//b.f5();	//Base::f5 --> Early Binding
	//b.f6();	//Compiler Error
	return 0;
}
int main2( void )
{
	Base *ptr = new Base();

	//ptr->f1();	//Base::f1 --> Late Binding
	//ptr->f2();	//Base::f2 --> Late Binding
	//ptr->f3();	//Base::f3 --> Late Binding
	//ptr->f4();	//Base::f4 --> Early Binding
	//ptr->f5();	//Base::f5 --> Early Binding
	//ptr->f6();	//Compiler Error

	delete ptr;
	return 0;
}
int main3( void )
{
	Base *ptr = new Derived( );	//Upcasting : OK
	//ptr->f1();	//Derived::f1 --> Late Binding
	//ptr->f2();	//Derived::f2 --> Late Binding
	//ptr->f3();	//Base::f3 --> Late Binding
	//ptr->f4();	//Base::f4 --> Early Binding
	//ptr->f5();	//Base::f5 --> Early Binding
	//ptr->f6( );	//Compiler Error
	delete ptr;
	return 0;
}
int main4( void )
{
	Derived *ptr = new Derived( );
	//ptr->f1();	//Derived::f1 --> Late Binding
	//ptr->f2();	//Derived::f2 --> Late Binding
	//ptr->f3();	//Base::f3 --> Late Binding
	//ptr->f4();	//Derived::f4 --> Early Binding
	//ptr->f5();	//Derived:f5 --> Late Binding
	//ptr->f6( );	//Derived:f6 --> Late Binding
	delete ptr;
	return 0;
}

