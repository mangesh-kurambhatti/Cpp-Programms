#ifndef POINT_H_
#define POINT_H_

// point class decl with namespace
namespace NPoint
{
	class Point
	{
		private:
			int xPosition;
			int yPosition;
		public:

			// way1 parameterized ctor with default arguements only
			//Point(int xposition=100, int yposition=200);

			// way2	parameterized ctor with default arguements with ctor int list
			Point(int xposition=100, int yposition=200);

			int GetXPosition() const;
			int GetYPosition() const;
			void SetXPosition(int xposition);
			void SetYPosition(int yposition);
			void AcceptInputFromConsole();
			void PrintOutputOnConsole()const;
			~Point();

	};//end of Point class

}//end of namespace NPoint

//The conditional compilation directives are
	/*#if,
	#else,
	#elif,
	#ifdef,
	#ifndef,
	#endif,
	#undef.
	*/


#endif /* POINT_H_ */


