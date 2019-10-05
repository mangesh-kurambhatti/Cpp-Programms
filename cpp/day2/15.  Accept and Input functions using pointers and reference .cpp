#include<iostream>
using namespace std;
void AcceptInput(int *ptr); // by address
void Printoutput(const int *ptr);
void AcceptInput(int &ptr); // by reference
void Printoutput(const int &ptr);
int main(void)
{
	int no1;

	// call by address
	AcceptInput(&no1);
	Printoutput(&no1);

	// call by reference
	AcceptInput(no1);
	Printoutput(no1);

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
// ptr is reference of no1
void AcceptInput(int &ptr) // by reference
{
	cout<<"enter ptr::";
	cin>>ptr;
}
// ptr is reference of no1
void Printoutput(const int &ptr)
{
	cout<<"ptr :: "<<ptr<<endl;
}

