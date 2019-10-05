#include<cstdlib>
#include<iostream>
using namespace std;

class Complex
{
public:
	Complex( void )
	{
		cout<<"Inside ctor"<<endl;
	}
	~Complex( void )
	{
		cout<<"Inside dtor"<<endl;
	}
};
int main( void )
{
	Complex *ptr = (Complex*)malloc( sizeof( Complex ) );

	free( ptr );
	return 0;
}

int main1( void )
{
	//Complex *ptr = new Complex;
	Complex *ptr = new Complex();	//Complex::Complex()

	delete ptr;	//Complex::~Complex( );
	return 0;
}
