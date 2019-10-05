#include<iostream>
using namespace std;
void AcceptInput(int *ptr);
void Printoutput(const int *ptr);
int main(void)
{
	int no1;

	AcceptInput(&no1);
	Printoutput(&no1);

	return 0;
}
void AcceptInput(int *ptr)
{
	cout<<"Enter *ptr ::";
	cin>>*ptr;
	//cin>>ptr; //error
	// scanf("%d", ptr); //allowed in c
	return;
}
void Printoutput(const int *ptr)
{
	cout<<"*ptr="<<*ptr<<endl;
	return ;
}
