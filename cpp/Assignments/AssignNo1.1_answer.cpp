#include<stdio.h>

int main()
{

	int arr[10];
	int credit_card_no;
	int sum_even_places=0;
	int odd_place_num;	
	static int sum_odd_places=0;
	
	printf("\n Enter the no for verification::\n");
	scanf("%d",&credit_card_no);

	for(int i=0;i<8 && credit_card_no !=0 ;i++)
		{
			int remainder=credit_card_no % 10;
			arr[i]=remainder;	
			credit_card_no=credit_card_no/10;	
		}	
		
        for (int i = 0; i < 8; i += 2)
            sum_even_places=sum_even_places + arr[i];

	printf("\nSum of EVEN position is :%d\n",sum_even_places);

	
	for (int i = 1; i < 8; i += 2)
	{
			odd_place_num=arr[i]*2;
     		while(odd_place_num != 0)
			{
				int remainder= odd_place_num % 10;
					
				sum_odd_places=sum_odd_places + remainder;			
			
				odd_place_num=odd_place_num / 10;
			}

	}
	printf("\nSum of ODD position is :%d\n",sum_odd_places);

	int final_total = sum_even_places + sum_odd_places;
	

	printf("\nSum of TOTAL ODD POS AND EVEN POS is :%d\n",final_total);

	if ( (final_total%10)==0)
		printf("\n VALID");
	else
		printf("\nNOT VALID");	

return 0;	

}
