#include<iostream>
using namespace std;
class Point
{
private:
	int xPosition;
	int yPosition;
public:
	Point( void ) : xPosition( 0 ), yPosition( 0 )
	{	}
	Point( int xPosition, int yPosition ) : xPosition( xPosition ), yPosition( yPosition )
	{	}
	//Point *const this = &pt1
	Point operator+( Point &other )
	{
		Point temp;
		temp.xPosition = this->xPosition + other.xPosition;
		temp.yPosition = this->yPosition + other.yPosition;
		return temp;
	}
	Point operator+( int value )
	{
		Point temp;
		temp.xPosition = this->xPosition + value;
		temp.yPosition = this->yPosition + value;
		return temp;
	}
	bool operator==( Point &other )
	{
		return this->xPosition == other.xPosition && this->yPosition == other.yPosition;
	}
	Point operator++( void )//PreIncrement
	{
		Point temp;
		temp.xPosition = ++ this->xPosition;
		temp.yPosition = ++ this->yPosition;
		return temp;
	}
	Point operator++( int )//PostIncrement
	{
		Point temp;
		temp.xPosition =  this->xPosition ++;
		temp.yPosition =  this->yPosition ++;
		return temp;
	}
	void printRecord( void )
	{
		cout<<"X Position	:	"<<this->xPosition<<endl;
		cout<<"Y Position	:	"<<this->yPosition<<endl;
	}
};
int main( void )
{
	Point pt1( 10, 20 );
	//Point pt2 = ++ pt1;	//pt2 = pt1.operator++( )
	Point pt2 = pt1 ++;	//pt2 = pt1.operator++( 0 )
	pt1.printRecord();
	cout<<endl;
	pt2.printRecord();
	return 0;
}
int main3( void )
{
	Point pt1( 10,20);
	Point pt2( 10,20);
	//bool status = pt1 == pt2;//status = pt1.operator==( pt2 )
	cout<< ( pt1 == pt2  ? "Equal" :"Not Equal") <<endl;
	return 0;
}
int main2( void )
{
	Point pt1( 10,20);
	Point pt2 = pt1 + 5;	//pt2 = pt1.operator+( 5 )
	//Point pt2 = 5 + pt1;//Not OK	//pt2 = 5.operator+( pt1 )
	pt2.printRecord();
	return 0;
}

int main1( void )
{
	Point pt1( 10,20);
	Point pt2( 30,40);
	Point pt3;
	pt3 = pt1 + pt2;	//pt3 = pt1.operator+( pt2 )
	pt3.printRecord();
	return 0;
}
