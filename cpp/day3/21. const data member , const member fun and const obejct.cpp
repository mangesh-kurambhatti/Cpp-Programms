#include<iostream>
using namespace std;
namespace NConstDemo
{
	class ConstDemo
	{
		private:
			//const int a =10; // allowed in cpp11 std
			const int a;
			const int b;
			int c;
			mutable int d;
		public:
			// ctor init list
			ConstDemo():a(10), b(20), c(30), d(40)
			{
				//this->a=10; error as a and b are const data members
				//this->b=20;
				//this->c=100; // allowed as c and d are non const
				//this->d=200;
			}
			// ctor init list
			ConstDemo(int a, int b, int c, int d):a(a),b(b), c(c),d(d)
			{

			}
			//void Print(ClassName * const this)
			//void Print(ConstDemo * const this)
			//void Print(const className * const this)const
			//void Print(const ConstDemo * const this)const
			void Print()const
			{
				//this->a=1000; // error a and b are const
				//this->b=2000;
				//this->c=3000; // error as print is const member function
				this->d=4000;// allowed as d is mutable data member
				cout<<" this->a =" <<this->a<<endl;
				cout<<" this->b =" <<this->b<<endl;
				cout<<" this->c =" <<this->c<<endl;
				cout<<" this->d =" <<this->d<<endl;
				// we can not chnage the state of obejct in const member fun of class
			}
			// void Display(className * const this)
			// void Display(ConstDemo * const this)
			void Display()
			{
				//this->a=1000; // error
				//this->b=2000;
				this->c=3000;
				this->d=4000;
				cout<<" this->a =" <<this->a<<endl;
				cout<<" this->b =" <<this->b<<endl;
				cout<<" this->c =" <<this->c<<endl;
				cout<<" this->d =" <<this->d<<endl;
			}

			~ConstDemo()
			{
				//this->a=0; error as a and b are const data member
				//this->b=0;
				this->c=0;
				this->d=0;
			}
	}; // end of ConstDemo class
}//end of NConstDemo namespace
using namespace NConstDemo;
int main(void)
{
	ConstDemo c1; // non const obejct
	cout<<"size of c1="<<sizeof(c1)<<endl;
	// c1 is not const obejct can called const member function
	cout<<"c1 :: Print()"<<endl;
	c1.Print();

	// c1 is not const obejct can called non const member function
	cout<<"c1 :: Display()"<<endl;
	c1.Display();


	ConstDemo c2(100, 200, 300, 400); // non const object
	cout<<"size of c2="<<sizeof(c2)<<endl;
	cout<<"c2 :: Print() "<<endl;
	c2.Print();
	cout<<"c2 :: Display() "<<endl;
	c2.Display();

	const ConstDemo c3; // const obejct
	cout<<"size of c3="<<sizeof(c3)<<endl;

	// const object can call const member fun as this pointer are of same type
	cout<<"c3 :: Print() "<<endl;
	c3.Print();
	cout<<"c3 :: Display() "<<endl;
	// const obejct can not called non const member function as they have different type of this pointer
	//c3.Display();


	return 0;
}
