#include<stdio.h>
int no1=10; // global variable
int main()
{
	int no1=100; // local variable

	printf("\n no1=%d &no1=%u local variable", no1, &no1);
	printf("\n ::no1=%d &::no1=%u global variable", ::no1, &::no1);

	// variable_name  local variable
	//::variable_name global variable

	return 0;
}
