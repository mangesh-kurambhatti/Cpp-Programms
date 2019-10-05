#include<iostream>
using namespace std;


static void print( void )
{
	int count = 0;
	++ count;
	cout<<"Count	:	"<<count<<endl;
}
int main( void )
{
	::print();
	::print();
	::print();
	return 0;
}
int main1( void )
{
	extern int num1;
	cout<<"Num1	:	"<<num1<<endl;

	extern int num2;
	//cout<<"Num2	:	"<<num2<<endl;	//Linker Error

	void display( void );
	display();
	return 0;
}	
