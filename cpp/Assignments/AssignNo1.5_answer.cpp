/*
5) Write a menu driven program for class Point and provide the following functionalities as shown in following UML diagram.TPoint--+++++++
_xPosition : int
_yPosition : int
TPoint( void )
TPoint( xPosition : const int, yPosition : const int )
GetXPosition( void ): int
SetXPosition( xPosition : const int ): void
GetYPosition( void ): int
SetYPosition( yPosition : const int ): void
Sum( pointInstance : TPoint ): TPoint 
*/

#include<iostream>
using namespace std;
namespace tpoint
{

	class TPoint
	{
		private:
				int	xPosition;
				int yPosition;
				//int sum;
		public:
			TPoint(int xPosition=10,int yPosition=20);
			int GetXPosition( void )const;
			void SetXPosition( const int xPosition);
			int GetYPosition( void )const;
			//int GetSum(void)const;
			void SetYPosition( const int yPosition);
			TPoint Sum();
	};//end of class

	TPoint::TPoint(int x,int y):xPosition(x),yPosition(y)
	{
		//this->xPosition=xposition;
		//this->yPosition=yposition;		
	}

	int TPoint::GetXPosition(void)const
	{
		return this->xPosition;
	}
	
	void TPoint::SetXPosition(const int xPosition)
	{
		this->xPosition=xPosition;
	}

	
	int TPoint::GetYPosition(void)const
	{
		return this->yPosition;
	}

	int TPoint::GetSum(void)const
	{
		return this->sum;
	}
	
	void TPoint::SetYPosition(const int yPosition)
	{
		this->yPosition=yPosition;
	}

	TPoint TPoint::Sum(TPoint t)
	{
		TPoint t1;

		//t1.sum =this->xPosition + this->yPosition;

		t1.yPosition =t1.yPosition + t.yPosition;
		t1.xPosition =t1.xPosition + t.xPosition;

		return t1;
	}

}//end of namespace

using namespace tpoint;
int main()
{
	int x,y;

	TPoint t1(100,200);

	x=t1.GetXPosition();
	cout<<"\n X-Cordinate is:"<<x<<endl;

	y=t1.GetYPosition();
	cout<<"\n Y-Cordinate is:"<<y<<endl;

	TPoint t3=t1.Sum();
	
	//cout<<"Sum is"<<t3.GetSum();

	cout<<t3.GetXPosition()<<endl;
	cout<<t3.GetYPosition()<<endl;
return 0;
}
