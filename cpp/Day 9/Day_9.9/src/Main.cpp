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
	Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}
	//Complex *const this = &c2
	Complex& operator=( const Complex &other )
	{
		cout<<"void operator=( const Complex &other )"<<endl;
	yy	this->real = other.real;
		this->imag = other.imag;
		return *this;
	}
	friend istream& operator>>( istream &cin, Complex &other);
	friend ostream& operator<<( ostream &cout, const Complex &other );
};
istream& operator>>( istream &cin, Complex &other)
{
	cout<<"Real Number	:	";
	cin>>other.real;
	cout<<"Imag Number	:	";
	cin>>other.imag;
	return cin;
}
ostream& operator<<( ostream &cout, const Complex &other )
{
	cout<<"Real Number	:	"<<other.real<<endl;
	cout<<"Imag Number	:	"<<other.imag<<endl;
	return cout;
}
int main( void )
{
	Complex c1( 10,20);
	Complex c2;
	Complex c3;
	//c2 = c1;	//c2.operator=( c1 )
	c3 = c2 = c1;	//c3.operator=(c2.operator=(c1))
	cout<<c3;
	return 0;
}
int main3( void )
{
	Complex c1, c2;
	cin>>c1>>c2;	//operator>>( operator>>( cin, c1),c2)
	cout<<c1<<c2;	//operator<<( operator<<( cout, c1),c2)
	return 0;
}
int main2( void )
{
	Complex c1;
	cin>>c1;	//operator>>( cin, c1 )
	cout<<c1;	//operator<<( cout, c1 )
	return 0;
}
int main1( void )
{
	Complex c1( 10, 20);
	Complex c2( 30, 40);
	//cout<<c1;	//operator<<( cout, c1 );
	cout<<c1<<c2;//operator<<( operator<<( cout,c1),c2)
	return 0;
}
