#include<iostream>
using namespace std;

namespace na
{
	int num1 = 10;
}
int main( void )
{
	int num1 = 20;
	using namespace na;
	cout<<num1<<endl;	//20
	return 0;
}
int main1( void )
{
	using namespace na;
	cout<<num1<<endl;	//10
	return 0;
}
