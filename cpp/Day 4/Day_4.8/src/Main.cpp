#include<cstdlib>
#include<iostream>
using namespace std;

int main( void )
{
	int *ptr = new int;
	//int *ptr = ( int* )::operator new(sizeof( int ) );

	*ptr = 125;	//Dereferencing
	cout<<"Value	:	"<<*ptr<<endl;

	delete ptr;
	//::operator delete(ptr);
	return 0;
}
int main3( void )
{
	int *ptr = ( int* )realloc(NULL,sizeof( int ) );
	if( ptr != NULL )
	{
		*ptr = 125;	//Dereferencing
		cout<<"Value	:	"<<*ptr<<endl;
		free( ptr );
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
int main2( void )
{
	int *ptr = ( int* )calloc( 1, sizeof( int ) );
	if( ptr != NULL )
	{
		*ptr = 125;	//Dereferencing
		cout<<"Value	:	"<<*ptr<<endl;
		free( ptr );
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}

int main1( void )
{
	int *ptr = ( int* )malloc( sizeof( int ) );
	if( ptr != NULL )
	{
		*ptr = 125;	//Dereferencing
		cout<<"Value	:	"<<*ptr<<endl;
		free( ptr );
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
