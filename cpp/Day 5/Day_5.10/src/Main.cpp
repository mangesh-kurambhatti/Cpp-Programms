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
		//friend class Outer;
	};//end of class
	void print( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		Inner in;
		cout<<"Num2	:	"<<in.num2<<endl;
	}
};
int main( void )
{
	Outer out;
	out.print( );
	return 0;
}
