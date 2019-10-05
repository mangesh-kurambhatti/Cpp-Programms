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
#define size	3
class Array
{
private:
	int arr[ size ];
public:
	Array( void )
	{
		for( int index = 0 ; index < size; ++ index )
			this->arr[ index ] = 0;
	}
	//Array *const this = &obj
	void acceptRecord( void )	//void acceptRecord( /*Array *const this */ )
	{
		for( int index = 0; index < size; ++ index )
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
		if( index >= 0 && index < size )
			this->arr[ index ] = element;
		else
			throw ArgumentException("Invalid index");
	}
	//const Array *const this = &obj
	void printRecord( void )const
	{
		for( int index = 0; index <size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
};
int main( void )
{
	try
	{
		Array obj;
		obj.setElement( 0, 10 );
		obj.setElement( 1, 20 );
		obj.setElement( 2, 30 );

		int element = 0;
		for( int index = 0; index < size; ++ index )
		{
			element = obj.getElement( index );
			cout<<element<<endl;
		}

	}
	catch( ArgumentException &ex )
	{
		cout<<ex.getMessage()<<endl;
	}
	return 0;
}
int main2( void )
{
	//class Array a1;	//Ok
	Array a1;	//Ok

	a1.acceptRecord();
	//a1.Array::acceptRecord();

	a1.printRecord();
	//a1.Array::printRecord( );
	return 0;
}
int main1( void )
{
	Array obj;
	obj.acceptRecord( );	//obj.acceptRecord( &obj );
	obj.printRecord( );		//obj.printRecord( &obj );
	return 0;
}
