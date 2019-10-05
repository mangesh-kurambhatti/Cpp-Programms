#include<iostream>
using namespace std;
//void swap(int n1, int n2); // 1. call by value
//void swap(int *n1, int *n2); // 2. call by address
void swap(int &n1, int &n2); //3. call by reference

int main(void)
{
	int no1=10, no2=20;
/*	cout<<"call by value ::"<<endl;
	cout<<"before swap in main no1= "<<no1<<"  no2="<<no2<<endl;
	cout<<"before swap in main &no1= "<<&no1<<"  &no2="<<&no2<<endl;
	swap(no1,no2); // call  by value
	cout<<"after swap in main no1= "<<no1<<"  no2="<<no2<<endl;
	cout<<"before swap in main &no1= "<<&no1<<"  &no2="<<&no2<<endl;
*/
/*
	cout<<"call by address ::"<<endl;
	cout<<"before swap in main no1= "<<no1<<"  no2="<<no2<<endl;
	cout<<"before swap in main &no1= "<<&no1<<"  &no2="<<&no2<<endl;
	swap(&no1,&no2); // call  by address
	cout<<"after swap in main no1= "<<no1<<"  no2="<<no2<<endl;
	cout<<"before swap in main &no1= "<<&no1<<"  &no2="<<&no2<<endl;
*/

	cout<<"call by reference ::"<<endl;
	cout<<"before swap in main no1= "<<no1<<"  no2="<<no2<<endl;
	cout<<"before swap in main &no1= "<<&no1<<"  &no2="<<&no2<<endl;
	swap(no1,no2); // call  by reference
	cout<<"after swap in main no1= "<<no1<<"  no2="<<no2<<endl;
	cout<<"before swap in main &no1= "<<&no1<<"  &no2="<<&no2<<endl;
	return 0;
}
// 1. call by value
/*void swap(int n1, int n2)
{
	int temp=0;
	cout<<"before swap in swap n1= "<<n1<<"  n2="<<n2<<endl;
	cout<<"before swap in swap &n1= "<<&n1<<"  &n2="<<&n2<<endl;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"after swap in swap n1= "<<n1<<"  n2="<<n2<<endl;
	cout<<"after swap in swap &n1= "<<&n1<<"  &n2="<<&n2<<endl;

}*/
// 2. call by addeess
/*void swap(int *n1, int *n2)
{
	int temp=0;
	cout<<"before swap in swap *n1= "<<*n1<<"  *n2="<<*n2<<endl;
	cout<<"before swap in swap n1= "<<n1<<"  n2="<<n2<<endl;
	temp=*n1;    //temp=*(100) ==10
	*n1=*n2;     // *(100) = *(104)  -- > *(100)=20
	*n2=temp;    // *(104) = temp -->   *(104)=10
	cout<<"after swap in swap *n1= "<<*n1<<"  *n2="<<*n2<<endl;
	cout<<"after swap in swap n1= "<<n1<<"  n2="<<n2<<endl;

}*/

// n1 is reference of no1  (n1 is another name of no1)
// n2 is reference of no2  (n2 is another name of no2)
void swap(int &n1, int &n2) //3. call by reference
{
	int temp=0;
	cout<<" before swap in swap n1="<<n1 << " n2="<<n2<<endl;
	cout<<" before swap in swap &n1="<<&n1 << " &n2="<<&n2<<endl;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<" after swap in swap n1="<<n1 << " n2="<<n2<<endl;
	cout<<" after swap in swap &n1="<<&n1 << " &n2="<<&n2<<endl;
}
