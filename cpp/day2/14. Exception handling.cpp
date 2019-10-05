#include<iostream>
using namespace std;
int main(void)
{
	int no1,no2;
	try
	{
		cout<<"Enter no1::";
		cin>>no1;
		cout<<"Enter no2::";
		cin>>no2;

		if( no2==0)
		{
			throw 1;
		
			//throw true; // bool
			//throw 'A'; // float
			//throw 1.2f; // float
			//throw 1.2; // double
			//throw 1; // int
		}
		else
		{
			int result=no1/no2;
			cout<<"result="<<result<<endl;
		}
	}
	catch(int n)
	{
		cout<<"inside int catch1 n="<<n<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(int n)
	{
		cout<<"inside int catch2 n="<<n<<endl;
		cout<<"can not divide by zero"<<endl;
	}

	catch(double n)
	{
		cout<<"inside double catch n="<<n<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(float n)
	{
		cout<<"inside float catch n="<<n<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(char n)
	{
		cout<<"inside char catch n="<<n<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(...) // generic catch
	{
		cout<<"inside generic catch "<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	return 0;
}
