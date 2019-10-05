#include<cstring>//#include<string.h>
#include<iostream>
using namespace std;

namespace NException
{
	class Exception
	{
		private:
				//data members or fields or variables
			int lineNo;
			char errorMessage[40];

		public:
			Exception(const int lineno, const char *errormessage)
			{
				this->lineNo=lineno;
				strcpy(this->errorMessage, errormessage);  //d=s;
			}
			void PrintErrorMessage()
			{
				cout<<"Line No ="<<this->lineNo<<endl;
				cout<<"Error Message ="<<this->errorMessage<<endl;
				cout<<" File Name ::"<<__FILE__<<endl;
				cout<<" Date ::"<<__DATE__<<endl;
				cout<<" Time ::"<<__TIME__<<endl;
			}
			~Exception()
			{
				this->lineNo=0;
				strcpy(this->errorMessage,"");
			}


	};//end of Exception class
}//end of NException namespace
using namespace NException;
int main(void)
{
	#line 100 // #line 0 allowed #line -1 not allowed
	int no1,no2;
	try
	{
	  //className ObjectName (parameters)
	  //Exception ex1(__LINE__+17,"Error. Can not divide by Zero");
		cout<<"Enter no1::";
		cin>>no1;
		cout<<"Enter no2::";
		cin>>no2;

		if( no2==0)
		{
			//throw 1;
			//throw true; // bool
			//throw 'A'; // float
			//throw 1.2f; // float
			//throw 1.2; // double
			//throw 1; // int
			//throw ex1;
				 // className (parameters)
			throw Exception(__LINE__ +4, "Error . Can not divide by 0");
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
	catch( Exception& ex)
	{
		cout<<"inside Exception catch "<<endl;
		ex.PrintErrorMessage();
	}
	catch(...) // generic catch
	{
		cout<<"inside generic catch "<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	return 0;
}
