#include<iostream>
using namespace std;
int main( void )
{
	class Complex
	{
	private:
		int real,imag;
	public:
		Complex( int real = 0, int imag  = 0) : real( real ), imag( imag )
		{	}
		void print( void )const
		{
			cout<<"Real Number	:	"<<this->real<<endl;
			cout<<"Imag Number	:	"<<this->imag<<endl;
		}
	};

	Complex c1(10,20);
	c1.print();
	return 0;
}
