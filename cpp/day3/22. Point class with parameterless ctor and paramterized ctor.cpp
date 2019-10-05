#include<iostream>
using namespace std;
namespace NPoint
{
	class Point
	{
		//private:
		public:
			int xPosition;
			int yPosition;
		public:
			Point()
			{
				this->xPosition=100;
				this->yPosition=200;
				cout<<"inside parameterless ctor of Point class"<<endl;
			}
			Point(int value)
			{
				this->xPosition=value;
				this->yPosition=value;
				cout<<"inside one parameter ctor of Point class"<<endl;
			}
			Point(int xposition, int yposition)
			{
				this->xPosition=xposition;
				this->yPosition=yposition;
				cout<<"inside two parameter ctor of Point class"<<endl;
			}
			// print and inspectors should be const member fun of class
			int GetXPosition() const
			{
				return this->xPosition;
			}
			int GetYPosition() const
			{
				return this->yPosition;
			}
			// accept and mutator cam not made as const member fun of class
			void SetXPosition(int xposition)
			{
				this->xPosition=xposition;
			}
			void SetYPosition(int yposition)
			{
				this->yPosition=yposition;
			}
			// input
			void AcceptInputFromConsole()
			{
				cout<<"Enter xPosition :: ";
				cin>>this->xPosition;
				cout<<"Enter yPosition :: ";
				cin>>this->yPosition;
			}
			void PrintOutputOnConsole()const
			{
				cout<<" this->xPosition :: "<<this->xPosition<<endl;
				cout<<" this->yPosition :: "<<this->yPosition<<endl;
			}

			~Point()
			{
				this->xPosition=0;
				this->yPosition=0;
				cout<<"inside dtor of Point class"<<endl;
			}
			/*~Point()
			{
			}*/


	};//end of Point class

}//end of namespace
using namespace NPoint;
int main(void)
{
	//case 1
	Point p1; // parameterless ctor xPosition =100 yPosition =200
	cout<<"p1 :: "<<endl;
	p1.PrintOutputOnConsole();
	cout<<"================================"<<endl;

	//case 2
	Point p2(1000); // one parameter ctor xPosition=1000   yPosition=1000
	cout<<"p2 :: "<<endl;
	p2.PrintOutputOnConsole();

	cout<<"================================"<<endl;

	//case 3
	Point p3(1000, 2000); // two parameter ctor xPosition=1000   yPosition=2000
	cout<<"p3 :: "<<endl;
	p3.PrintOutputOnConsole();

	cout<<"================================"<<endl;
	// case 4

	// fun decl
	void p4();  // p4 is function whose return type type void
	            // p4 is not a object
	cout<<"================================"<<endl;
	// fun decl
	Point p5();  // p5 is function whose return type type Point
		         // p5 is not a object
	cout<<"================================"<<endl;

	Point p6; // parameterless ctor
	Point *ptr=&p6; // for pointer ctor is not called
	cout<<"ptr ::"<<endl;
	ptr->PrintOutputOnConsole(); // 100 200
	cout<<"================================"<<endl;


	Point p7; // parameterless ctor
	Point &pref=p7; // for reference ctor is not called
	cout<<"pref :: "<<endl;
	pref.PrintOutputOnConsole();
	cout<<"================================"<<endl;

	Point p8=(100, 200, 300, 400, 500); // one parameter ctor
	//Point p8( 500);
	cout<<"p8 :: "<<endl;
	p8.PrintOutputOnConsole();
	cout<<"================================"<<endl;

	//Point p9 = 100, 200, 300, 400, 500; // compile time error

	//cout<<"p9 :: "<<endl;
	//p9.PrintOutputOnConsole();
	cout<<"================================"<<endl;

	Point(10,20).PrintOutputOnConsole(); // two parameter ctor
	// xpoistion 10, yposition=20

	Point(10).PrintOutputOnConsole(); // one parameter ctor
	// xpoistion 10, yposition=10

	Point().PrintOutputOnConsole(); //  parameterless ctor
	// xpoistion 100, yposition=200

	cout<<"================================"<<endl;

	// when data member is public and cpp11 std is set
	Point p10={500, 600}; // two parameter ctor
	cout<<"p10 :: "<<endl;
	p10.PrintOutputOnConsole();//xposition=500, yPosition =600

	Point p12={500}; // one parameter ctor
	cout<<"p11 :: "<<endl;
	p12.PrintOutputOnConsole(); //xposition=500, yPosition =500


	return 0;
}
