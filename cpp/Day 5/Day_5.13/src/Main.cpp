#include<iostream>
using namespace std;
class Complex
{
private:
	int real,imag;
public:
	Complex( void )
	{
		cout<<"Complex( void )"<<endl;
		this->real = 0;
		this->imag = 0;
	}
	//Complex *const this = &c2;
	//Complex &other = c1;
	Complex( const Complex &other )	//Copy Constructor
	{
			cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}
	Complex( int real, int imag)
	{
		cout<<"Complex( int real, int imag)"<<endl;
		this->real = real;
		this->imag = imag;
	}
	//Complex *const this = &c1;
	//Complex other = c2;
	Complex sum( Complex other )
	{
		Complex temp;
		temp.real =  this->real + other.real;
		temp.imag =  this->imag + other.imag;
		return temp;
	}
	void print( void )const
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};

int main( void )
{
	Complex c1;	//On c1 object parameterless ctor will call

	//Complex *ptr = &c1;	//Here ptr is pointer and on pointer

	//Complex &c2 = c1;	//Here c2 is reference and on reference

	//Complex c3 = c1;	//Here on c3 object copy ctor will call

	//Complex c4( c1 );	//Here on c4 object copy ctor will call

	Complex c5;//On c5 object parameterless ctor will call

	c5 = c1; //c5.operator=( c1 )

	return 0;
}
