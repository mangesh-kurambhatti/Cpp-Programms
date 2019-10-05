#include<iostream>
using namespace std;
#pragma pack(1)
namespace NEmpty
{
	class Empty
	{

	};
	struct empty
	{

	};
}
using namespace NEmpty;
int main(void)
{
	Empty e1;
	empty e2;

	cout<<"size of e1= "<<sizeof(e1)<<endl;
	cout<<"size of e2= "<<sizeof(e2)<<endl;

	cout<<"====================="<<endl;
	cout<<"&e1="<<&e1<<endl;
	cout<<"&e2="<<&e2<<endl;

//	cout<<"&Empty"<<&Empty<<endl; //error
//	cout<<"&empty"<<&empty<<endl;

	return 0;
}

