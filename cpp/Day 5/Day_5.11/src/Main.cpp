#include<iostream>
using namespace std;

class Outer
{
private:
	int num1;
public:
	Outer( void )
	{
		this->num1 = 10;
	}
public:
	class Inner
	{
	private:
		int num2;
	public:
		Inner( void )
		{
			this->num2 = 20;
		}
		void print( void )
		{
			Outer out;
			cout<<"Num1	:	"<<out.num1<<endl;
			cout<<"Num2	:	"<<this->num2<<endl;
		}
	};//end of class

};
int main( void )
{
	Outer::Inner in;
	in.print();
	return 0;
}
