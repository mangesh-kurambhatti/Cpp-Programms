#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void ) : real( 0 ), imag( 0 )
	{	}
	Complex( int real, int imag ) : real( real ), imag( imag )
	{	}
	void printRecord( void )
	{
		cout<<"X Position	:	"<<this->real<<endl;
		cout<<"Y Position	:	"<<this->imag<<endl;
	}
	friend Complex operator+( Complex &c1, Complex &c2 );
	friend Complex operator+( Complex &c1, int value );
	friend Complex operator+( int value, Complex &c1 );
	friend bool operator==( Complex &c1, Complex &c2 );
	friend Complex operator++( Complex &c1 );
	friend Complex operator++( Complex &c1, int );
};
Complex operator+( Complex &c1, Complex &c2 )
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
Complex operator+( Complex &c1, int value )
{
	Complex temp;
	temp.real = c1.real + value;
	temp.imag = c1.imag + value;
	return temp;
}
Complex operator+( int value, Complex &c1 )
{
	Complex temp;
	temp.real = value + c1.real;
	temp.imag = value + c1.imag;
	return temp;
}
bool operator==( Complex &c1, Complex &c2 )
{
	return c1.real == c2.real && c1.imag == c2.imag;
}
Complex operator++( Complex &c1 )
{
	Complex temp;
	temp.real = ++ c1.real;
	temp.imag = ++ c1.imag;
	return temp;
}
Complex operator++( Complex &c1, int )
{
	Complex temp;
	temp.real = c1.real ++;
	temp.imag = c1.imag ++;
	return temp;
}
int main( void )
{
	Complex c1( 10,20);
	//Complex c2 = ++ c1;	//c2 = operator++( c1 );
	Complex c2 =  c1 ++;	//c2 = operator++( c1, 0 );
	c1.printRecord();
	cout<<endl;
	c2.printRecord();
	return 0;
}
int main3( void )
{
	Complex c1( 10,20);
	Complex c2( 10,20);
	if( c1 == c2 )	//operator==( c1, c2 );
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;
	return 0;
}
int main2( void )
{
	Complex c1( 10,20);
	//Complex c2 = c1 + 5;	//c2 = operator+( c1, 5 );
	Complex c2 = 5 + c1;	//c2 = operator+( 5, c1 );
	c2.printRecord();
	return 0;
}
int main1( void )
{
	Complex c1( 10,20);
	Complex c2( 30,40);
	Complex c3;
	c3 = c1 + c2;	//c3 = operator+( c1,c2)
	c3.printRecord();
	return 0;
}
