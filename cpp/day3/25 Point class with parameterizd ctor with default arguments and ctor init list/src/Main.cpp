#include<iostream>
using namespace std;
#include"../include/Point.h"
using namespace NPoint;
// all function calls
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



	return 0;
}
