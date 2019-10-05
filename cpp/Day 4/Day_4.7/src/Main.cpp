#include<iostream>
using namespace std;

namespace na
{
	int num1 = 10;
}
using namespace na;
void show_record( void )
{
	//cout<<"Num1	:	"<<na::num1<<endl;

	//using namespace na;
	cout<<"Num1	:	"<<num1<<endl;
}
void print_record( void )
{
	//cout<<"Num1	:	"<<na::num1<<endl;

	//using namespace na;
	cout<<"Num1	:	"<<num1<<endl;
}
void display_record( void )
{
	//cout<<"Num1	:	"<<na::num1<<endl;

	//using namespace na;
	cout<<"Num1	:	"<<num1<<endl;
}
int main( void )
{
	::show_record( );

	::print_record( );

	::display_record( );
	return 0;
}
