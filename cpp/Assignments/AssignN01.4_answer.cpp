	#include<stdio.h>
struct Date
{
	private:
		//variables or data members or fields
		int dd;
		int mm;
		int yy;
	public:
		//member function or methods
		//void AcceptInputFromConsole(struct Date * const this)
		//d1.AcceptInputFromConsole() -->> this= &d1;
		//struct Date * const this=&d1;
		void AcceptInputFromConsole()
		{
			printf("\n Enter Date :: in DD/MM/YYYY format :: ");
			scanf("%d%*c%d%*c%d", &this->dd,&this->mm,&this->yy);
		}
		//	void PrintOutputOnConsole(struct Date * const this)
		void PrintOutputOnConsole()
		{
			printf("\n Date :: ");
			printf("%d-%d-%d", this->dd,this->mm, this->yy);
		}
		//bool IsValidDate(struct Date * const this)
		bool IsValidDate()
		{
			short int DaysInMonths[]={31,28, 31, 30,31,30,31,31,30,31,30,31};

			if(this->yy%4==0) // leap year (add all conditions of leap year)
				DaysInMonths[1]=29;

			if( !(this->yy>=100 && this->yy<=9999))
				return false;
			if( !(this->mm>=1 && this->mm<=12))
				return false;
			if( !(this->dd>=1 && this->dd<=DaysInMonths[this->mm-1]))
				return false;
			return true;
		}

};//end Date struct
int main(void)
{
	Date d1;
	do
	{
		printf("\n Enter Date ::\n");
		d1.AcceptInputFromConsole();
	}while ( !d1.IsValidDate());

	printf("\n d1::\n ");
	d1.PrintOutputOnConsole();
	return 0;
}

