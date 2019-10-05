#include<stdio.h>
// struct member aligement is by default 4 bytes
#pragma pack(1)// use to remove slack bytes as it make struct member alligemnt as 1 bytes
struct emp
{
	int empno;
	char name[10];
	float sal;
};
// extra 2 bytes added because of struct member alligment 4 bytes
//these are called as slack bytes
int main()
{
	//int no1;
	struct emp e1={100}; // e1 is variable(obejct) of struct emp user defined data type
	// strut emp is user defined data type

	struct emp *ptr=&e1;
	printf("\n size of e1=%d",sizeof(e1));
	printf("\n size of ptr=%d",sizeof(ptr));

	printf("\n EmpNo      Name      Sal\n");
	printf("%-8d %-10s %6.2f", e1.empno, e1.name, e1.sal);

	printf("\n Enter Emp Info :: ");
	printf("\n Enter Emp No :: ");
	scanf("%d", &e1.empno);

	printf("\n Enter Name :: ");
	scanf("%s", e1.name);

	do
	{
	  printf("\n Enter Emp sal :: ");
	  scanf("%f", &e1.sal);
	}while(e1.sal<0);

	printf("\n EmpNo      Name      Sal\n");
	printf("%-8d %-10s %6.2f", e1.empno, e1.name, e1.sal);

	printf("\n EmpNo      Name      Sal using pointer\n");
	printf("%-8d %-10s %6.2f", ptr->empno, ptr->name, ptr->sal);

	printf("\n EmpNo      Name      Sal using pointer\n");
	printf("%-8d %-10s %6.2f", (*ptr).empno, (*ptr).name, (*ptr).sal);

	printf("\n &e1=%u &e1+1=%u", &e1, &e1+1);
	printf("\n ptr=%u ptr+1=%u", ptr, ptr+1);

	return 0;
}
