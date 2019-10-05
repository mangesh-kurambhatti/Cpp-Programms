#include<iostream>
using namespace std;

int num1 = 10;	//Program Scope
static int num2 = 20;	//File Scope

void display( void )
{
	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
}
