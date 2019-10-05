#include<iostream>
using namespace std;
int num1 = 10;
namespace na
{
	int num2 = 20;
	namespace nb
	{
		int num3 = 30;
	}
}
int main( void )
{
	cout<<"Num1	:	"<<::num1<<endl;
	cout<<"Num2	:	"<<na::num2<<endl;
	cout<<"Num3	:	"<<na::nb::num3<<endl;
	return 0;
}
