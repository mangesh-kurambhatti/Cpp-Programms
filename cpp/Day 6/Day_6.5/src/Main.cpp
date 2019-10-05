
#include<iostream>
using namespace std;

class Test
{
private:
	int num1;
	int num2;
	static int num3;
public:
	Test( void )
	{
		this->num1 = 0;
		this->num2 = 0;
	}
	void setNum1( int num1 )
	{
		this->num1 = num1;
	}
	void setNum2( int num2 )
	{
		this->num2 = num2;
	}
	static void setNum3( int num3 )
	{
		Test::num3 = num3;
	}
	void print( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
		cout<<"Num3	:	"<<Test::num3<<endl;
	}
};
int Test::num3=100;
int main( void )
{
	Test t;
	//t.setNum(20);
	//Test::setNum3(20);
	t.print();
	return 0;
}
