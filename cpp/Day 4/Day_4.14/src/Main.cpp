#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void );

	Complex( int real, int imag );

	void printRecord( void )const;

	~Complex( void );
};
Complex::Complex( void ) : real( 10 ), imag( 20 )
{
	cout<<"Inside ctor"<<endl;
}
Complex::Complex( int real, int imag ) : real( real ), imag( imag )
{	}
void Complex::printRecord( void )const
{
	cout<<"Real	:	"<<this->real<<endl;
	cout<<"Imag	:	"<<this->imag<<endl;
}
Complex::~Complex( void )
{
	cout<<"Inside dtor"<<endl;
}
int main( void )
{
	new int;
	Complex *ptr = new Complex();

	delete ptr;
	return 0;
}
