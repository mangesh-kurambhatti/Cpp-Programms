#include<cstdlib>
#include<iostream>
using namespace std;
int main( void )
{
	int *ptr = new int[ 3 ];
	//int *ptr = (int*)::operator new[](3 * sizeof( int ) );

	ptr[ 0 ] = 100;
	ptr[ 1 ] = 200;
	ptr[ 2 ] = 300;

	for( int index = 0; index < 3; ++ index )
		cout<<ptr[ index ]<<endl;

	delete[] ptr;
	//::operator delete[](ptr);
	return 0;
}
int main3( void )
{
	int *ptr = ( int* )realloc( NULL , 3 * sizeof( int ) );
	if( ptr != NULL )
	{
		for( int index = 0; index < 3; ++ index )
		{
			cout<<"Eneter element	:	";
			cin>>ptr[ index ];
		}
		for( int index = 0; index < 3; ++ index )
			cout<<ptr[ index ]<<endl;

		free( ptr );
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
int main2( void )
{
	int *ptr = ( int* )calloc( 3 , sizeof( int ) );
	if( ptr != NULL )
	{
		for( int index = 0; index < 3; ++ index )
		{
			cout<<"Eneter element	:	";
			cin>>ptr[ index ];
		}
		for( int index = 0; index < 3; ++ index )
			cout<<ptr[ index ]<<endl;

		free( ptr );
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}

int main1( void )
{
	int *ptr = ( int* )malloc( 3 * sizeof( int ) );
	if( ptr != NULL )
	{
		for( int index = 0; index < 3; ++ index )
		{
			cout<<"Eneter element	:	";
			cin>>ptr[ index ];
		}
		for( int index = 0; index < 3; ++ index )
			cout<<ptr[ index ]<<endl;

		free( ptr );
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
