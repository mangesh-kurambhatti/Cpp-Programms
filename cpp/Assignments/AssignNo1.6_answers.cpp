/*Write a menu driven program to calculate volume of the box.Provide neceesary constructors ,inspector and mutator
functions.
TBox----+
_length : float
_width : float
_height : float
_volume : float
Member Functions(Assignment For You)
*/

#include<iostream>

using namespace std;

enum menu{
	LENGTH=1,WIDTH,HEIGHT,VOLUME
};

typedef menu MENU;


namespace box{

	class Box
	{
		private:
				float length;
	
				float height;
				float width;
				float volume;

		public:
				Box(int l,int w,int h):length(l),height(h),width(w)
				{

				}

				void SetLength(int length)
				{
					this->length=length;
				}
				
				float GetLength()const
				{
					return this->length;
				}


				void SetHeight(int height)
				{
					this->height=height;
				}
				
				float GetHeight()const
				{
					return this->height;
				}


				void SetWidth(int width)
				{
					this->width=width;
				}
				
				float GetWidth()const
				{
					return this->width;
				}

				float CalVolume()
				{
					return this->length * this->width * this->height;
				}
	};//class ends here

}//namespace end


int main()
{
		box::Box b(2,4,5);	
	
		float result=b.CalVolume();
			
		cout<<"Result is::"<<result;

return 0;
}
