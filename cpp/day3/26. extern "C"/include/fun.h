#ifndef FUN_H_
#define FUN_H_

/*
extern "C" int sum(int n1, int n2);
extern "C" int divide(int n1, int n2);
extern "C" int substract(int n1, int n2);
extern "C" int multiply(int n1, int n2);
*/

extern "C"
{
	int sum(int n1, int n2);
	int divide(int n1, int n2);
	int substract(int n1, int n2);
	int multiply(int n1, int n2);
}



#endif /* FUN_H_ */
