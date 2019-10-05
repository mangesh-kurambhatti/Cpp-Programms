#include<stdio.h>
#pragma pack(1)
struct emp
{
	int empno;
	char name[10];
	float sal;
};
void AcceptEmpInfo(struct emp *e); // e= 4 bytes as it is pointer
void PrintEmpInfo(const struct emp *e); // e =4 bytes as it is pointer
//void PrintEmpInfo(struct emp e); // e is 18 as it is object
int main()
{
	struct emp e1={100};

	printf("\n Enter Emp Info :: \n");
	AcceptEmpInfo(&e1);

	printf("\n EmpInfo \n ");
	PrintEmpInfo(&e1);

	return 0;
}
void AcceptEmpInfo(struct emp *e)
{
	printf("\n Enter Emp No :: ");
	scanf("%d", &e->empno);

	printf("\n Enter Name :: ");
	scanf("%s", e->name);

	do
	{
		printf("\n Enter Emp sal :: ");
		scanf("%f", &e->sal);
	}while(e->sal<0);

	return ;
}
void PrintEmpInfo(const struct emp *e)
{
	//e->sal=-10000;
	printf("\n EmpNo      Name      Sal\n");
	printf("%-8d %-10s %6.2f [&e1.empno=%u]", e->empno, e->name, e->sal, &e->empno);
	return;
}
