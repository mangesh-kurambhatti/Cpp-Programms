//#pragma pack(1)
#include<iostream>
using namespace std;

class Test
{
private:
	int num1;	//Instance Variable
	int num2;	//Instance Variable
	static int num3;	//Class Level variable
public:
	Test( void )
	{
		this->num1 = 0;
		this->num2 = 0;
		//Test::num3=20; dont assign here because then every object will get here only
	}
	void print( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
		cout<<"Num3	:	"<<Test::num3<<endl;
	}
};
int Test::num3 ;	//Global Definition
int main( void )
{
	Test t;
	t.print( );
	return 0;
}	
