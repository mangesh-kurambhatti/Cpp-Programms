#include<iostream>
using namespace std;
namespace NComplex
{
	class Complex
	{
		private:
			// data members or variables
			int real;
			int imag;
		public:

			void AcceptInputFromConsole();
			void PrintOutputOnConsole();
			void  SetReal(int real);
			void SetImag(int imag);
			int GetReal();
			int GetImag();
			// decl of parameterized ctor with default arguments
			Complex(int real=10, int imag=20);
			~Complex();

	}; // end of Complex class


//return_type className::MemberFunName(data_type parameters)

	void Complex:: AcceptInputFromConsole()
	{
		cout<<"Enter Real ::";
		cin>>this->real; // cin>>real;
		cout<<"Enter Imag ::";
		cin>>this->imag;
	}
	void Complex:: PrintOutputOnConsole()
	{
		cout<<" this->real ::"<<this->real <<"\t ["<< &this->real << " ]"<<endl;
		cout<<" this->imag ::"<<this->imag <<"\t ["<< &this->imag << " ]"<<endl;
	}

	void Complex:: SetReal(int real)
	{
		this->real=real;
	}
	void Complex::SetImag(int imag)
	{
		this->imag=imag;
	}
	int Complex:: GetReal()
	{
		return this->real;
	}
	int Complex::GetImag()
	{
		return this->imag;
	}
	// defination of parameterized ctor with default arguments
	Complex:: Complex(int real, int imag)
	{
		this->real=real;
		this->imag=imag;
		cout<<"inside parameterized ctor with default arguments of Complex class"<<endl;
	}
	Complex:: ~Complex()
	{
		cout<<"======================"<<endl;
		this->PrintOutputOnConsole();
		this->real=0;
		this->imag=0;
		cout<<"inside dtor of Complex class"<<endl;
	}

}// end of Namespace NComplex
using namespace NComplex;
int main(void)
{
	Complex c1;// parameterless ctor
	cout<<"c1 :: "<<endl;
	c1.PrintOutputOnConsole(); // real = 10  imag =20

	Complex c2(111,222); // paramerteizd ctor
	cout<<"c2:: "<<endl;
	c2.PrintOutputOnConsole(); // real =  111  imag=222

	int real, imag;
	cout<<"enter real :: ";
	cin>>real;
	cout<<"enter imag :: ";
	cin>>imag;

	Complex c3(real,imag); // parameterized ctor with default arguments

	cout<<"c3:: "<<endl;
	c3.PrintOutputOnConsole();


	return 0;
}



