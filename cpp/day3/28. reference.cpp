#include<iostream>
using namespace std;
int main(void)
{

	{
			 int a=10;
			 int &r= a;  // int * const r=&a;

			 const int &r1= a; // const int * const r1=&a;

			// r1=10000; // error not allowed

			 cout<<"r1="<<r1<<endl;
			 cout<<"&r1="<<&r1<<endl;


			 cout<<"a="<<a<<endl;
			 cout<<"&a="<<&a<<endl;

			 cout<<"r="<<r<<endl;
			 cout<<"&r="<<&r<<endl;

			 a=100;

			 cout<<"a="<<a<<endl;
 			 cout<<"&a="<<&a<<endl;
 			 cout<<"r="<<r<<endl;
 			 cout<<"&r="<<&r<<endl;

 			 r=1000;
 			cout<<"a="<<a<<endl;
 			cout<<"&a="<<&a<<endl;
			 cout<<"r="<<r<<endl;
		     cout<<"&r="<<&r<<endl;

		     r=NULL;
		     cout<<"a="<<a<<endl;
		     cout<<"&a="<<&a<<endl;
		     cout<<"r="<<r<<endl;
		     cout<<"&r="<<&r<<endl;

			 return 0;
	}



	int a=10;
	int &r=a; // int* const r = &a;
	// r is a reference of a



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
