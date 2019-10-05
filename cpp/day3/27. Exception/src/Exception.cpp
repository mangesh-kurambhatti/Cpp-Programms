#include<cstring>//#include<string.h>
#include<iostream>
using namespace std;
#include"../include/Exception.h"
using namespace NException;

// defination of member functions of Exception class

	//returnType className::MenberfunctionName(datatype paramters)
	Exception::Exception(const int lineno, const char *errormessage)
	{
		this->lineNo=lineno;
		strcpy(this->errorMessage, errormessage);  //d=s;
	}

	void Exception::PrintErrorMessage()
	{
		cout<<"Line No ="<<this->lineNo<<endl;
		cout<<"Error Message ="<<this->errorMessage<<endl;
		cout<<" File Name ::"<<__FILE__<<endl;
		cout<<" Date ::"<<__DATE__<<endl;
		cout<<" Time ::"<<__TIME__<<endl;
	}
	Exception::~Exception()
	{
		this->lineNo=0;
		strcpy(this->errorMessage,"");
	}

