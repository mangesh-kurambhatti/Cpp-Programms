#include<stdio.h>
int sum(int a, int b, int c=0, int d);
int main(void)
{
	int result=0;
	result= sum(10,20,30,40); // a=10 b=20 c=30 d=40
	printf("\n result = %d", result);

	//result= sum(,10,20,30); // a= b=10 c=20 d=30 //error
	result= sum(10,20,30); // a=10 b=20 c=30 d=0
	printf("\n result = %d", result);

	result= sum(10,20); // a=10 b=20 c=0 d=0
	printf("\n result = %d", result);

	result= sum(10); // a=10 b=0 c=0 d=0
	printf("\n result = %d", result);

	result= sum(); // a=0 b=0 c=0 d=0
	printf("\n result = %d", result);

	return 0;
}
int sum(int a, int b, int c, int d)
{
	printf("\n a=%d  b=%d c=%d d=%d",a ,b,c,d);
	return a+b+c+d;
}
