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

			//1.1 Input
			//void AcceptInputFromConsole(Complex * const this)
			void AcceptInputFromConsole()
			{
				cout<<"Enter Real ::";
				cin>>this->real; // cin>>real;
				cout<<"Enter Imag ::";
				cin>>this->imag;
			}

			//1.2 output
			void PrintOutputOnConsole()
			{
				cout<<" this->real ::"<<this->real <<"\t ["<< &this->real << " ]"<<endl;
				cout<<" this->imag ::"<<this->imag <<"\t ["<< &this->imag << " ]"<<endl;
			}
	}; // end of Complex class
}// end of Namespace NComplex
using namespace NComplex;
int main(void)
{

	Complex c1; //NComplex::Complex c1;
	cout<<"c1::"<<endl;
	c1.PrintOutputOnConsole();

	c1.AcceptInputFromConsole();
	cout<<"c1 ::"<<endl;
	c1.PrintOutputOnConsole();



		return 0;
}
