#include<iostream>
using namespace std;
#define IDE "Visual Studio"
int main( void )
{
	#ifndef IDE
		#define IDE "LUNA"
	#else
		#undef IDE
		#define IDE "MARS"
	#endif

	cout<<"IDE :"<<IDE<<endl;
	return 0;
}
