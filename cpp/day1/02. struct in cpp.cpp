#include<stdio.h>
#pragma pack(1)
struct emp
{
	private:
		// variable or data member or fields
		int empno;
		char name[10];
		float sal;
	public:
	// member function or methods
	//void AcceptEmpInfo(struct emp * const this)
	//void AcceptEmpInfo(emp * const this)
	//e1.AcceptEmpInfo(); ---> this= &e1;
	//struct emp * const this=&e1
	void AcceptEmpInfo()
	{
		printf("\n Enter Emp No :: ");
		scanf("%d", &this->empno);

		printf("\n Enter Name :: ");
		scanf("%s", this->name);

		do
		{
			printf("\n Enter Emp sal :: ");
			scanf("%f", &this->sal);
		}while(this->sal<0);

		return ;
	}
	//void PrintEmpInfo(struct emp * const this)
	void PrintEmpInfo()
	{
		printf("\n EmpNo      Name      Sal\n");
		printf("%-8d %-10s %6.2f [&e1.empno=%u]", this->empno, this->name, this->sal, &this->empno);
		return;
	}

	//void SetSalary(struct emp * const this,float salary)
	inline void SetSalary(float sal)
	{
		this->sal=sal;
		return;
	}

	//float GetSalary(struct emp * this)
	inline float GetSalary()
	{
		return this->sal;
	}


};
/*typedef enum menuchoice
{
	Exit=0, Accept_EmpInfo, Print_EmpInfo, Update_Salary, Print_Salary
}MENUCHOICE;
*/

enum menuchoice
{
	Exit=0, Accept_EmpInfo, Print_EmpInfo, Update_Salary, Print_Salary
};
typedef enum menuchoice MENUCHOICE;


int MenuChoice();

int main()
{

	emp e1; //struct emp e1={100};


	float newsal;
	MENUCHOICE choice; //enum menuchoice choice;

	do
	{
		choice= (MENUCHOICE)MenuChoice();
		switch(choice)
		{
			default: printf("\n Invalid Case ");
					 continue; //break;
			case Accept_EmpInfo :// Accept Emp Info
					printf("\n Enter Emp Info :: \n");
					//AcceptEmpInfo(&e1);
					e1.AcceptEmpInfo();
					break;
			case Print_EmpInfo : // Print Emp Info
					printf("\n EmpInfo \n ");
					e1.PrintEmpInfo();
					//PrintEmpInfo(&e1);
					break;
			case Update_Salary: // Update Salary
					printf("\n Enter new sal :: ");
					scanf("%f", &newsal);

					//SetSalary(&e1, newsal);
					e1.SetSalary(newsal);
					// this->sal=newsal;
					printf("\n EmpInfo \n ");
					e1.PrintEmpInfo();
					break;

			case Print_Salary: // Print Salary
					//e1.sal=-1000;
					//newsal= GetSalary(&e1);

					newsal= e1.GetSalary();
					//newsal= return this->sal;

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

int MenuChoice()
{
	int choice;
	printf("\n 1. Accept Emp Info \n 2. Print Emp Info");
	printf("\n 3. Update Salary \n 4. Print Salary \n 0. Exit");
	printf("\n Enter Your Choice :: ");
	scanf("%d", &choice);
	return choice;
}

