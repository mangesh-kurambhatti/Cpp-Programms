/*2) A bank charges $10 per month plus the following check fees
for a commercial checking account:
$0.10 each for fewer than 20 checks
$0.08 each for 20-39 checks
$0.06 each for 40-59 checks
$0.04 each for 60 or more checks
The bank also charges an extra $15.00 if the balance of the account falls below $400 (before any check fees are
applied). 
Write a program that asks for the beginning balance and the number of check written. Compute and display the bank's service fees for the month.
Input Validation: Do not accept a negative value for the number of checks written. If a negative value is given for
the beginning balance, display an urgent message indicating the account is overdrawn.*/
#include<iostream>
using namespace std;

int main()
{
	float balance;
	float check_written;
	static float fees=0;
	do
	{
		cout<<"Enter the Balacnce in $::"<<endl;
		cin>>balance;
	}while(balance < 0);

	cout<<"Enter the no of checkes writeen::"<<endl;
	cin>>check_written;

	if(balance < 400)
		fees=fees+15;


	if(check_written< 20)
		fees=fees+0.10;

	if(check_written>= 20 && check_written<40)
		fees=fees+0.08;

	if(check_written>= 40 && check_written<60)
		fees=fees+0.06;
	
	if(check_written>= 60 )
		fees=fees+0.04;

//$0.08 each for 20-39 checks
//$0.06 each for 40-59 checks
//$0.04 each for 60 or more checks

	cout<<"Total fees="<<fees<<endl;

return 0;
}
