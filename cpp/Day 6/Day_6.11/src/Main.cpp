#include<iostream>
#include<stack>
using namespace std;
class stack
{
	//Data
	int top;
	int arr[ 5 ];
public:
	//Code
	bool empty( void ){	}
	void push( int element ){	}
	int top( ){	}
	void pop( void ){	}
};
int main( void )
{
	stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);

	int element = 0 ;
	while( !s1.empty( ) )
	{
		element = s1.top();
		cout<<"Removed element	:	"<<element<<endl;
		s1.pop();
	}

	return 0;
}
