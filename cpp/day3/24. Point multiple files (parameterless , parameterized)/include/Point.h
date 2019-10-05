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
			Point(); // 1 parameterless
			Point(int value); // 2 one parameter
			Point(int xposition, int yposition); // 3 two parameters
			int GetXPosition() const;
			int GetYPosition() const;
			void SetXPosition(int xposition);
			void SetYPosition(int yposition);
			void AcceptInputFromConsole();
			void PrintOutputOnConsole()const;
			~Point();

	};//end of Point class

}//end of namespace NPoint


#endif /* POINT_H_ */
