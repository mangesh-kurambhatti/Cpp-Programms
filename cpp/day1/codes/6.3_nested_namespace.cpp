#include<stdio.h>

namespace N1
{
	int no1=500;
	int no2=700;
}

namespace N2
{
	int no1=250;
	namespace N3
	{
		int no1=75;
		int no3=800;
	}
}

int no1=10;

int main()
{
	int no1=100;//local variable;

	printf("\n NO1=%d AND &NO1=%u local variable",no1,&no1);

return 0;

}
