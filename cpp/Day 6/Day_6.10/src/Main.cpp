#include<iostream>
using namespace std;
class Singleton
{
private:
	Singleton( void )
	{	}
private:
	Singleton( const Singleton &other )
	{	}
public:
	static Singleton& getInstance( void )
	{
		static Singleton instance;
         cout<<"gtgtgtgtgt";
 
		
		return instance;
	}
};
int main( void )
{
	Singleton& s1 =  Singleton::getInstance();
	Singleton& s2 =  Singleton::getInstance();
	return 0;
}




