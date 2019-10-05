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


			// 4.3 parameterized ctor with default arguments
			Complex(int real=10, int imag=20)
			{
				this->real=real;
				this->imag=imag;
				cout<<"inside parameterized ctor with default arguemnts of Complex class"<<endl;
			}

			//5. dtor
			~Complex()
			{
				cout<<"======================"<<endl;
				this->PrintOutputOnConsole();
				this->real=0;
				this->imag=0;
				cout<<"inside dtor of Complex class"<<endl;
			}


	}; // end of Complex class
}// end of namespace NComplex
using namespace NComplex;
int main(void)
{
	Complex c1;// parameterized ctor with default arguments
	cout<<"c1 :: "<<endl;
	c1.PrintOutputOnConsole(); // real = 10  imag =20

	Complex c2(111,222); //parameterized ctor with default arguments
	cout<<"c2:: "<<endl;
	c2.PrintOutputOnConsole(); // real =  111  imag=222

	int real, imag;
	cout<<"enter real :: ";
	cin>>real;
	cout<<"enter imag :: ";
	cin>>imag;

	Complex c3(real ,imag  );// parameterized ctor with default arguments

	cout<<"c3:: "<<endl;
	c3.PrintOutputOnConsole();
	return 0;
}

