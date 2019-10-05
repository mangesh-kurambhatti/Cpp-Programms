
#include<iostream>
using namespace std;

class A
{
public:
	static void f1( void ){	}
};
class B
{
public:
	static void f2( void )
	{	}
	static void f3( void )
	{
		A::f1();	//OK
		//f1( );	//Not OK

		B::f2( );	//Ok
		f2( );	//OK
	}
};
int main( void )
{
	//f3();	//Not OK
	B::f3( );
	return 0;
}
