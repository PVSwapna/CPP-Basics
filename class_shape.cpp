#include<iostream>
using namespace std;

class Shape
{
private:
	float a,b;
public:
	float square_area,rectangle_area,circle_area;
	Shape()
	{
		square_area=a*a;
		rectangle_area=a*b;
		circle_area=3.14*b*b;	
	}
	void set_area(float a,float b)
	{
		square_area=a*a;	//a=side
		rectangle_area=a*b;	//a=base & b=height
		circle_area=3.14*b*b;	//b=radius
	}
	void get_area()
	{
		cout<<"Area of square:"<<square_area<<endl;
		cout<<"Area of rectangle:"<<rectangle_area<<endl;
		cout<<"Area of circle:"<<circle_area<<endl;
	}
};

int main()
{
Shape s1;

float a,b;
cin>>a>>b;

s1.set_area(a,b);
s1.get_area();
}