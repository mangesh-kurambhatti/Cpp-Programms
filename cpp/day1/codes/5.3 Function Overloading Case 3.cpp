#include<stdio.h>
//Function having same name ,same number of arguments but order of arguments are different
float sum(int n1, float n2) // sum@@int,float
{
	return n1+n2;
}
float sum(float n1, int n2) // sum@@float, int
{
	return n1+n2;
}
int main()
{
	printf("\n result= %.2f",sum(10.2f,20) ); // sum@@float, int
	printf("\n result= %.2f",sum(10,22.2f) ); // sum@@int, float
	return 0;
}
