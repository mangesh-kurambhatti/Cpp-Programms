#include<iostream>
using namespace std;

int num1 = 10;	//Ok
int main( void )
{
	int num1 = 20;	//Ok
	cout<<"Num1	:	"<<::num1<<endl;	//10
	cout<<"Num1	:	"<<num1<<endl;		//20

	{//Start of block

		int num1 = 30;
		cout<<"Num1	:	"<<::num1<<endl;	//10
		cout<<"Num1	:	"<<num1<<endl;		//30
	}
	return 0;
}
