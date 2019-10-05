
#include<iostream>
using namespace std;
class Math
{
public:
	static const double PI;
public:
	static float power( float base, int index )
	{
		float result = 1;
		for( int count = 1; count <= index ; ++ count )
			result = result * base;
		return result;
	}
};
const double Math::PI = 3.14;
int main( void )
{
	float radius = 10;
	float area = Math::PI * Math::power( radius, 2 );
	cout<<"Area	:	"<<area<<endl;
	return 0;
}
