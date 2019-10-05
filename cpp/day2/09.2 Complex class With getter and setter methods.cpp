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

			//2. setter methods mutator
			// they modify state of the object
			//void  SetReal(Complex * const this , int real)
			void  SetReal(int real)
			{
				this->real=real;
			}
			//void SetImag(Complex * const this,int imag)
			void SetImag(int imag)
			{
				this->imag=imag;
			}
			// 3. getter methods  inspector
			// they dont modify state of obejct
			//int GetReal(Complec * const this)
			int GetReal()
			{
				return this->real;
			}
			int GetImag()
			{
				return this->imag;
			}


	}; // end of Complex class
}// end of Namespace NComplex
using namespace NComplex;
int main(void)
{

	Complex c1;// parameterless ctor
	cout<<"c1 :: "<<endl;
	c1.PrintOutputOnConsole(); // real = 10  imag =20

	int real, imag;
	cout<<"Enter Real :: ";
	cin>>real;
	c1.SetReal(real); //  setter method mutators for assigning value to real data member

	cout<<"Enter Imag :: ";
	cin>>imag;
	c1.SetImag(imag); // using setter method mutators for assigning value to imag data member


	real= c1.GetReal(); // getting value of real data member using getter method inspector
	imag= c1.GetImag(); // getting value of real data member using getter method inspector

	cout<<"c1 :: "<<endl;

	cout<<" real of c1 :: "<<real<<endl;
	cout<<" imag of c1 :: "<<imag<<endl;

	return 0;
}

