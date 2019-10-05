#include<iostream>
using namespace std;
int num1 = 10;
namespace na
{
	int num1 = 20;
	namespace nb
	{
		int num1 = 30;
	}
}
int main( void )
{
	cout<<"Num1	:	"<<::num1<<endl;
	cout<<"Num2	:	"<<na::num1<<endl;
	cout<<"Num3	:	"<<na::nb::num1<<endl;
	return 0;
}
