#include<iostream>
#include<string>
using namespace std;

//template<typename T>	//T - Type Paremeter
template<class T>	//T - Type Paremeter
void swap_object( T &obj1, T &obj2 )
{
	T temp = obj1;
	obj1 = obj2;
	obj2 = temp;
}
int main( void )
{
	int num1 = 10;
	int num2 = 20;

	swap_object<int>( num1, num2 ); //int --> Type Argument
	//swap_object( num1, num2 ); //int --> Type Argument
	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	return 0;
}
