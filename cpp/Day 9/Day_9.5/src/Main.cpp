#include<iostream>
using namespace std;

template<class X, class Y>
void swap_object( X &obj1, Y &obj2 )
{
	X temp = obj1;
	obj1 = obj2;
	obj2 = temp;
}
int main( void )
{
	float num1 = 10.1f;
	double num2 = 20.2;

	swap_object<float, double>( num1, num2 );
	//<float, double> --> Template argument list

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	return 0;
}
