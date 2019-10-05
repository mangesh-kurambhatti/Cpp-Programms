
/*Non working code please dont run this*/
#include<iostream>

using namespace std;

class demo
{
private:
		int no;


	demo(int no)
	{
		
		cout<<"demo(int no)"<<endl;
		this->no=no;
		demo d;
		d.print();
	}
//public:

	void print()
	{
		cout<<this->no<<endl;
	}
private:
	~demo()
	{
		cout<<"This is destructor"<<endl;
	}
};

int main()
{
	demo d;
	
	//d.print();
return 0;
}
