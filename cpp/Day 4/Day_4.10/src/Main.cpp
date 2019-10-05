#include<cstdlib>
#include<iostream>
using namespace std;

int main( void )
{
	try
	{
		int count = 1000000000000;
		int *ptr = new int[ count ];

		cout<<"Address	:	"<<ptr<<endl;
		delete ptr;
	}
	catch( bad_alloc &ex )
	{
		cout<<ex.what()<<endl;
	}
	return 0;
}

int main1( void )
{
	int count = 1000000000000;
	int *ptr = ( int* )malloc( count * sizeof( int ) );
	if( ptr != NULL )
	{
		cout<<"Address	:	"<<ptr<<endl;
		free( ptr );
	}
	else
		cout<<"NULL"<<endl;
	return 0;
}
