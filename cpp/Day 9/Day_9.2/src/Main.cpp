#include<iostream>
using namespace std;
int sum( int num1, int num2 )
{
	int result = num1 + num2;
	return result;
}
int sub( int num1, int num2 )
{
	int result = num1 - num2;
	return result;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Sum"<<endl;
	cout<<"2.Sub"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		int (*ptr)( int , int  ) = NULL;
		switch( choice )
		{
		case 1:
			ptr = sum;
			break;
		case 2:
			ptr = sub;
			break;
		}
		if( ptr != NULL )
		{
			int result = ptr( 100,20 );
			cout<<"Result	:	"<<result<<endl;
		}
	}
	return 0;
}
