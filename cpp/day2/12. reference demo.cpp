#include<iostream>
using namespace std;
int main(void)
{
	int a=10;
	int &r=a; // r is a reference for a

	cout<<" a= "<<a<<"  &a= "<<&a<<endl;
	cout<<" r= "<<r<<"  &r= "<<&r<<endl;

	a=100;
	cout<<" a= "<<a<<"  &a= "<<&a<<endl;
	cout<<" r= "<<r<<"  &r= "<<&r<<endl;


	r=1000;
	cout<<" a= "<<a<<"  &a= "<<&a<<endl;
	cout<<" r= "<<r<<"  &r= "<<&r<<endl;

	r++;
	cout<<" a= "<<a<<"  &a= "<<&a<<endl;
	cout<<" r= "<<r<<"  &r= "<<&r<<endl;

	a++;

	cout<<" a= "<<a<<"  &a= "<<&a<<endl;
	cout<<" r= "<<r<<"  &r= "<<&r<<endl;

	r=NULL;

	cout<<" a= "<<a<<"  &a= "<<&a<<endl;
	cout<<" r= "<<r<<"  &r= "<<&r<<endl;

	{
		int a=10;
		int &r=a; // allowed
		cout<<"r="<<r<<endl;
		// we can can create referecne to object
		//int &r1=NULL;

		//int &r2=1000; // not allowed
		//we can not create a reference to constant
	}


	return 0;
}
