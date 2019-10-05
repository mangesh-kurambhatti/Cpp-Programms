#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

class ArgumentException
{
private:
	string message;
public:
	ArgumentException( string message = "Argument Exception" ) : message( message )
	{	}
	string getMessage( void )
	{
		return this->message;
	}
};
class Array
{
private:
	int size;
	int *arr;
public:
	Array( void )
	{
		cout<<"Array( void )"<<endl;
		this->size = 0;
		this->arr = nullptr;
	}
	Array( int size )
	{
		cout<<"Array( int size )"<<endl;
		this->size = size;
		this->arr = new int[ this->size ];
	}
	//Array *const this = &obj
	void acceptRecord( void )	//void acceptRecord( /*Array *const this */ )
	{
		for( int index = 0; index < this->size; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	int getElement( int index )const throw( ArgumentException )
	{
		if( index >= 0 && index < size )
			return this->arr[ index ];
		throw ArgumentException("Invalid index");
	}
	void setElement( int index, int element )throw( ArgumentException )
	{
		if( index >= 0 && index < this->size )
			this->arr[ index ] = element;
		else
			throw ArgumentException("Invalid index");
	}
	//const Array *const this = &obj
	void printRecord( void )const
	{
		for( int index = 0; index < this->size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
	~Array( void )	//Destructor
	{
		cout<<"~Array( void )"<<endl;
		if( this->arr != nullptr )
		{
			delete[] this->arr;
			this->arr = nullptr;
		}
	}
};
int main( void )
{
	char name[ 20 ];
	Array *ptr =  new ( name ) Array( 3 );
	ptr->acceptRecord();
	ptr->printRecord();
	ptr->~Array();
	return 0;
}
int main4( void )
{
	Array *ptr = ( Array*)malloc( sizeof( Array ) );

	free( ptr );
	return 0;
}
int main3( void )
{
	//Array a1( 3 );
	Array *ptr = new Array( 3 ); //Array::Array( int size )
	//TODO :
	delete ptr;	//Array::~Array( )
	return 0;
}
int main2( void )
{
	//Array a1;
	Array *ptr =  new Array( );	//Array::Array( )
	//TODO
	delete ptr;	//Array::~Array( );

	return 0;
}
int main1( void )
{
	Array a1( 3 );

	a1.acceptRecord();

	a1.printRecord();

	return 0;
}
