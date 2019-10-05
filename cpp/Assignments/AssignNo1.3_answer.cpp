/* Write a menu driven program for Date using C language syntax and provide the following functionalities
typedef structdate
{
int day;
int month;
int year;
}Date;
void init_date( Date* const ptrDateInstance );
int validate_date( Date* const ptrDateInstance );
void add_days( Date* const ptrDateInstance, int days );
void accept_record( Date* const ptrDateInstance );
void print_record(const Date* const ptrDateInstance );
*/

#include<stdio.h>

int MenuChoice();


typedef struct date
{
	int day;
	int month;
	int year;
}Date;

enum menu
{	
	AcceptDate=1,PrintDate,UpdateDate,ValidateDate
};

typedef menu MENU;

void init_date( Date* const ptrDateInstance );
bool validate_date( Date* const ptrDateInstance );
void add_days( Date* const ptrDateInstance, int days );
void accept_record( Date* const ptrDateInstance );
void print_record(const Date* const ptrDateInstance );

void accept_record( Date* const d )
{
		printf("\n Enter the DAY::\n");
		scanf("%d",&d->day);

		printf("\n Enter the MONTH::\n");
		scanf("%d",&d->month);

		printf("\n Enter the DAY::\n");
		scanf("%d",&d->year);

}

void print_record(const Date* const d)
{
	printf("\n %d / %d / %d \n",d->day,d->month,d->year);
}

void add_days( Date* const d,int days )
{
	
	d->day=days;
}
/*
bool validate_date( Date* const d )
{
		int arr_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

		if(d->year % 4==0)
			arr_month[1]=29;

		if(!(d->month >= 1 && d->month <= 12))
			return false;
		if(!(d->day >= 1 && d->day <= arr_month[d->month -12]))
			return false;
		
		return true;
}
*/
int main()
{
	Date d;
	int new_date;
	int choice;
	int DAY;
	do
	{
		choice=(MENU)MenuChoice();
		switch(choice)
		{
			case AcceptDate:
					accept_record(&d);
					break;

			case PrintDate:
					print_record(&d);
					break;
							
			case UpdateDate:
					printf("Enter the new DAY::");
					scanf("%d",&DAY);
				
					add_days(&d,DAY);		
					break;

			case 0:
					return 0;			
		}

	}while(choice != 0);
return 0;
}


int MenuChoice()
{
	int choice;

	printf("\n1.Accept Date.");
	printf("\n2.Print Date.");
	printf("\n3.Add Date.");
	printf("\n4.validate Date.");
	printf("\n0.Exit");

	printf("\n Enter your choice :");
	scanf("%d",&choice);

	return choice;
}
