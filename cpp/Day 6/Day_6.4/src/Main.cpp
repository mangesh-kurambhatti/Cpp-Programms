
#include<iostream>
using namespace std;

class Test
{
private:
	int num1;	//Instance Variable
	int num2;	//Instance Variable
	static const int num3;	//Class Level variable
public:
	Test( int num1 = 0, int num2 = 0 )
	{
		this->num1 = num1;
		this->num2 = num2;
		
	}
	void print( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
		cout<<"Num3	:	"<<Test::num3<<endl;
	}
};
const int Test::num3 = 500;
int main( void )
{
	Test t;
	t.print( );
	return 0;
}
