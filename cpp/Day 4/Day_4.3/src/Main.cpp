#include<iostream>
using namespace std;

namespace na
{
	int num1 = 10;	//namspace scope
	int num3 = 30;
}
namespace na
{
	int num2 = 20;	//namspace scope
	int num3 = 40;	//Compiler Error : Redefinition
}
int main( void )
{
	cout<<"Num1	:	"<<na::num1<<endl;
	cout<<"Num2	:	"<<na::num2<<endl;
	cout<<"Num3	:	"<<na::num3<<endl;
	return 0;
}
