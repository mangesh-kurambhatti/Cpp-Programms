#ifndef EXCEPTION_H_
#define EXCEPTION_H_

namespace NException
{
	class Exception
	{
		private:
			//data members or fields or variables
			int lineNo;
			char errorMessage[40];
		public:
			Exception(const int lineno, const char *errormessage);
			void PrintErrorMessage();
			~Exception();
	};//end of Exception class

}//end of namespace NExcpetion

#endif /* EXCEPTION_H_ */
