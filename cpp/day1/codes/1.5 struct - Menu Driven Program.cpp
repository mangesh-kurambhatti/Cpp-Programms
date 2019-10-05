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

void SetSalary(struct emp *e,float sal);
float GetSalary(const struct emp *e);
int MenuChoice();

int main()
{

	struct emp e1={100};
	float newsal;
	int choice;

	do
	{
		choice= MenuChoice();
		switch(choice)
		{
			default: printf("\n Invalid Case ");
					 continue; //break;
			case 1 :// Accept Emp Info
					printf("\n Enter Emp Info :: \n");
					AcceptEmpInfo(&e1);
					break;
			case 2 : // Print Emp Info
					printf("\n EmpInfo \n ");
					PrintEmpInfo(&e1);
					break;
			case 3: // Update Salary
					printf("\n Enter new sal :: ");
					scanf("%f", &newsal);
					SetSalary(&e1, newsal);

					printf("\n EmpInfo \n ");
					PrintEmpInfo(&e1);
					break;

			case 4: // Print Salary
					newsal= GetSalary(&e1);
					printf("\n new salary=%6.2f", newsal);
					break;
			case 0: //exit
					return 0; //exit(0);

		}

		printf("\n Enter 1 to Continue or 0 to Exit ");
		scanf("%d", &choice);

	}while(choice!=0);
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

void SetSalary(struct emp *e,float sal)
{
	e->sal=sal;
	return;
}

float GetSalary(const struct emp *e)
{
	return e->sal;
}

int MenuChoice()
{
	int choice;
	printf("\n 1. Accept Emp Info \n 2. Print Emp Info");
	printf("\n 3. Update Salary \n 4. Print Salary \n 0. Exit");
	printf("\n Enter Your Choice :: ");
	scanf("%d", &choice);
	return choice;
}
