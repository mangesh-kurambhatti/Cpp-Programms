#include<stdio.h>
/* not example in overloading  with void f1(int no1)
 int f1(int no1) // f1@@int
{
	printf("\n inside int block");
}*/
void f1(int no1) // f1@@int
{
	printf("\n inside int block");
}
void f1(float no1) // f1@@float
{
	printf("\n inside float block");
}
void f1(double no1) // f1@@double
{
	printf("\n inside double block");
}
void f1(char no1) // f1@@char
{
	printf("\n inside char block");
}
void f1(const char* no1) // f1@@char*
{
	printf("\n inside char*(string) block");
}
void f1(void) // f1@@void
{
	printf("\n no argument block");
}
void f1(bool) // f1@bool
{
	printf("\n inside bool block");
}
//1. bool -- false/true 1 byte
//2. wchat_t -- 16 bit char 2 bytes (unicode)


int main()
{
	f1(10); // inside int block
	f1(10.1f);//inside float block
	f1(10.1F);//inside float block
	f1(10.2);//inside double block
	f1((float)10.2);//inside float block
	f1((int)10.2);//inside int block
	f1('A');//inside char block
	f1("sunbeam");//inside char*(string) block
	f1(); // inside  no argument block
	f1(true); //inside bool block
	return 0;
}
