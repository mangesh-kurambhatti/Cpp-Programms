#include<iostream>
using namespace std;

int main( void )
{
	char name[ 30 ];
	cout<<"Name	:	";
	cin>>name;

	int *ptr = new ( &name[10] ) int( 125 );
	//int *ptr = ( int* )::operator new(sizeof(int), name);
	cout<<*ptr<<endl;

	cout<<"Name	:	"<<name<<endl;

	return 0;
}
