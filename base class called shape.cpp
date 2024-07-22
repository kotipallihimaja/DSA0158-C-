#include<iostream>
#include<cmath>
using namespace std;
class shape 
{
	protected:
		double height;
		double width;
		public:
			shape(double h,double w):height(h),width(w){}
			virtual double area()=0;
			virtual double perimeter()=0;
};
class rectangle:public shape
{
	public:
		rectangle(double h,double w):shape(h,w){}
		double area()override
		{
			return height*width;
		}
		double perimeter()override
		{
			return 2*(height+width);
		}
};
class triangle:public shape
{
	public:
		triangle(double h,double w):shape(h,w){}
		double area()override
		{
			return 0.5*height*width;
		}
		double perimeter()override
		{
			double hypotenuse=sqrt(height*height+width*width);
				return height+width+hypotenuse;
		}
};
int main()
{
	double height, width;
    cout << "Enter height and width of the rectangle: ";
    cin >> height >> width;
    rectangle rect(height, width);
    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;
    cout << "Enter height and base of the triangle: ";
    cin >> height >> width;
    triangle tri(height, width);
    cout << "Triangle Area: " << tri.area() << endl;
    cout << "Triangle Perimeter: " << tri.perimeter() << endl;
    return 0;
}