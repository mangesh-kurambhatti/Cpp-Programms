#include<iostream>
using namespace std;
void swap(int *n1, int *n2); // 2. call by address
int main(void)
{
	int no1=10, no2=20;

	cout<<"before swap in main no1= "<<no1<<"  no2="<<no2<<endl;
	cout<<"before swap in main &no1= "<<&no1<<"  &no2="<<&no2<<endl;
	swap(&no1,&no2); // call  by address
	cout<<"after swap in main no1= "<<no1<<"  no2="<<no2<<endl;
	cout<<"before swap in main &no1= "<<&no1<<"  &no2="<<&no2<<endl;
	return 0;
}
// 2. call by addeess
void swap(int *n1, int *n2)
{
	int temp=0;
	cout<<"before swap in swap *n1= "<<*n1<<"  *n2="<<*n2<<endl;
	cout<<"before swap in swap n1= "<<n1<<"  n2="<<n2<<endl;
	temp=*n1;    //temp=*(100) ==10
	*n1=*n2;     // *(100) = *(104)  -- > *(100)=20
	*n2=temp;    // *(104) = temp -->   *(104)=10
	cout<<"after swap in swap *n1= "<<*n1<<"  *n2="<<*n2<<endl;
	cout<<"after swap in swap n1= "<<n1<<"  n2="<<n2<<endl;

}

