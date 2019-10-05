#include<stdio.h>
//case 2 Function having same name and same number of arguments but differs in type of arguments
int sum(int n1, int n2) // sum@@int,int
{
	return n1+n2;
}
float sum(int n1, float n2) // sum@@int,float
{
	return n1+n2;
}
int main()
{
	printf("\n result= %d",sum(10,20) ); // sum@@int, int
	printf("\n result= %.2f",sum(10,20.2f) ); // sum@@int,float
	return 0;
}
