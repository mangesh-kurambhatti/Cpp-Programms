#include<stdio.h>

namespace N1
{
	int no1=500;
	int no2=700;
}

int no1=10; // global variable
int main()
{
	int no1=100; // local variable

	printf("\n no1=%d &no1=%u local variable", no1, &no1);
	printf("\n ::no1=%d &::no1=%u global variable", ::no1, &::no1);

	printf("\n N1::no1=%d &N1::no1=%u no1 variable from Namespace N1 ", N1::no1, &N1::no1);
	printf("\n N1::no2=%d &N1::no2=%u no2 variable from Namespace N1 ", N1::no2, &N1::no2);

	using namespace N1;
	printf("\n no1=%d &no1=%u no1 variable local ",no1, &no1);
	printf("\n no2=%d &no2=%u no2 variable from Namespace N1 ",no2, &no2);
	// variable_name  					local variable
	//::variable_name 				    global variable
	//namespace_name::variable_name     variable from that namespace

	return 0;
}
