#include<iostream>
using namespace std;

class Matrix
{
	private:
			int row;
			int col;
			int **arr1;
			int **arr2;
	public:

		Matrix(int row,int col):row(row),col(col)
		{
			arr1=new int*[row];
			for(int i=0;i<row;i++)
				arr1	[i]=new int[col];

			arr2=new int*[row];
			for(int i=0;i<row;i++)
				arr2[i]=new int[col];
		} 


		void Accept_Record1()
		{
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					cin>>arr1[i][j];
				}
			}
		}

		void Print_Record1()
		{
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					cout<<arr1[i][j]<<"\t";
				}
				cout<<endl;
			}
		}



		void Accept_Record2()
		{
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					cin>>arr2[i][j];
				}
			}
		}

		void Print_Record2()
		{
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					cout<<arr2[i][j]<<"\t";
				}
				cout<<endl;
			}
		}


		void Addition()
		{
			int **add=new int*[row];
			for(int i=0;i<row;i++)
				add[i]=new int[col];


			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					add[i][j]=arr1[i][j] + arr2[i][j];

//					cout<<arr2[i][j]<<"\t";
				}
				
			}


			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					cout<<add[i][j]<<"\t";//add[i][j]=arr1[i][j] + arr2[i][j];

//					cout<<arr2[i][j]<<"\t";
				}
				cout<<endl;
			}

			for( int index = 0; index < 2; ++ index )
				delete[] add[ index ];
			delete[] add;
				
		}

		void Substraction()
		{
			int **sub=new int*[row];
			for(int i=0;i<row;i++)
				sub[i]=new int[col];


			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					sub[i][j]=arr1[i][j] - arr2[i][j];

//					cout<<arr2[i][j]<<"\t";
				}
				
			}


			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					cout<<sub[i][j]<<"\t";//add[i][j]=arr1[i][j] + arr2[i][j];

//					cout<<arr2[i][j]<<"\t";
				}
				cout<<endl;
			}

		for( int index = 0; index < 2; ++ index )
				delete[] sub[ index ];
			delete[] sub;
				
		}


	void Multiplication()
		{
			int **mul=new int*[row];
			for(int i=0;i<row;i++)
				mul[i]=new int[col];


			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
						mul[i][j]=arr1[i][j] * arr2[j][i];
					//					cout<<arr2[i][j]<<"\t";
				}
				
			}


			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					cout<<mul[i][j]<<"\t";//add[i][j]=arr1[i][j] + arr2[i][j];

//					cout<<arr2[i][j]<<"\t";
				}
				cout<<endl;
			}

		for(int i=0;i<row;i++)
			delete[] mul[i];
		delete mul;
				
		}

		~Matrix()
		{
		for( int index = 0; index < 2; ++ index )
				delete[] arr1[ index ];
			delete[] arr1;
		
			for( int index = 0; index < 2; ++ index )
				delete[] arr2[ index ];
			delete[] arr2;

		
			
		}
};

int main()
{
	Matrix m(2,2);

	cout<<"Enter the Records::"<<endl;
	m.Accept_Record1();

	cout<<"Record Entered by You are::"<<endl;	
	m.Print_Record1();


	cout<<"Enter the Records::"<<endl;
	m.Accept_Record2();

	cout<<"Record Entered by You are::"<<endl;	
	m.Print_Record2();

	cout<<"Addition of two matrix is:"<<endl;
	m.Addition();

	cout<<"Substraction of two matrix is::"<<endl;
	m.Substraction();


	cout<<"Multiplication of two matrix is::"<<endl;
	m.Multiplication();

return 0;
}
