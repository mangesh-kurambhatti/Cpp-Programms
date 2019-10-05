#include<iostream>
using namespace std;

class Test
{
public:
	void showRecord( void )
	{
		cout<<"void showRecord( void )"<<endl;
	}
	static void printRecord( void )
	{
		cout<<"static void printRecord( void )"<<endl;
	}
}t1;
int main( void )
{
	t1.showRecord();

	t1.printRecord( );

	return 0;
}




