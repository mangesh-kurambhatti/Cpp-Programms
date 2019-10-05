#include<cstdlib>
#include<iostream>
using namespace std;
int main( void )
{
	int **ptr = new int*[ 2 ];
	for( int index = 0; index < 2; ++ index )
		ptr[ index ] = new int[ 3 ];

	for( int row = 0; row < 2; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			cout<<"Enter element	:	";
			cin>>ptr[ row ][ col ];
		}
	}
	for( int row = 0; row < 2; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			cout<<ptr[ row ][ col ]<<"	";
		}
		cout<<endl;
	}
	for( int index = 0; index < 2; ++ index )
		delete[] ptr[ index ];
	delete[] ptr;
	return 0;
}
int main3( void )
{
	int **ptr = new int*[ 2 ];
	for( int index = 0; index < 2; ++ index )
		ptr[ index ] = new int[ 3 ];

	//TODO : accept & print

	for( int index = 0; index < 2; ++ index )
		delete[] ptr[ index ];
	delete[] ptr;
	return 0;
}
int main2( void )
{
	int **ptr = ( int** )calloc( 2 , sizeof( int* ) );
	if( ptr != NULL )
	{
		for( int index = 0; index < 2; ++ index )
			ptr[ index ] = ( int* )calloc( 3 , sizeof( int ) );

		//TODO : accept & print record

		for( int index = 0; index < 2; ++ index )
			free( ptr[ index ] );
		free( ptr );
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}

int main1( void )
{
	int **ptr = ( int** )malloc( 2 * sizeof( int* ) );
	if( ptr != NULL )
	{
		for( int index = 0; index < 2; ++ index )
			ptr[ index ] = ( int* )malloc( 3 * sizeof( int ) );

		//TODO : accept & print record

		for( int index = 0; index < 2; ++ index )
			free( ptr[ index ] );
		free( ptr );
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
