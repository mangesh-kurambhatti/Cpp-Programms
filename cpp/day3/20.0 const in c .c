#include<stdio.h>
int main( void )
{
	//const float pi=3.142f;
	const float pi;
	float *ptr= &pi;

	printf("\n pi=%f", pi);

	printf("\n pi=%f", pi);
	printf("\n *ptr=%f", *ptr);
	*ptr= 3.152f; // changing value of pi using pointer
	printf("\n *ptr=%f", *ptr);
	printf("\n pi=%f", pi);
	return 0;
}

