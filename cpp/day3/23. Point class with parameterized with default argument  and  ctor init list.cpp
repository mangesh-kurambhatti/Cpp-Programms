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
			/*Point(int xposition=100, int yposition=200)
			{
				this->xPosition=xposition;
				this->yPosition=yposition;
				cout<<"inside  parameterized ctor with default arguments of Point class"<<endl;
			}*/

			// ctor init list
			Point(int xposition=100, int yposition=200):xPosition(xposition), yPosition(yposition)
			{

				cout<<"inside  parameterized ctor with default arguments of Point class"<<endl;
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
	Point p1; // parameterized ctor with default argument
	          // xPosition =100 yPosition =200
	cout<<"p1 :: "<<endl;
	p1.PrintOutputOnConsole();
	cout<<"================================"<<endl;

	//case 2
	Point p2(1000); // parameterized ctor with default argument
	cout<<"p2 :: "<<endl; // xposition =1000 y=200
	p2.PrintOutputOnConsole();

	cout<<"================================"<<endl;

	//case 3
	Point p3(500, 600); // parameterized ctor with default argument
	cout<<"p3 :: "<<endl; // xpoistion =500 , yposition =600
	p3.PrintOutputOnConsole();


	return 0;
}
