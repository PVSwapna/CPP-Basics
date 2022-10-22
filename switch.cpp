//triangle
//rectangle
//circle

#include<iostream>
using namespace std;

float a_tri()
{
float b,h;
cout<<"\nBase:"<<endl;
cin>>b;
cout<<"height"<<endl;
cin>>h;
float area=0.5*b*h;
return area;
}

float a_rect()
{
float l,br;
cout<<"\nLength:"<<endl;
cin>>l;
cout<<"Breadth"<<endl;
cin>>br;
float area=l*br;
return area;
}

float a_circle()
{
float r;
cout<<"\nraduis"<<endl;
cin>>r;
float area=3.14*r*r;
return area;
}

int main()
{
int choice;

while(true)
{

cout<<"\n==========================\n"
    <<"|1. Area of Triangle.\t |\n|2. Area of rectangle.\t |\n|3. Area of Circle.\t |\n|4. Exit\t\t |"
    <<"\n==========================\n"
    <<"\nPlease enter your choice:";

cin>>choice;
switch(choice)
{

	case 1:
		cout<<"Area of triangle : "<<a_tri()<<endl;
		break;
	case 2:
		cout<<"Area of Rectangle : "<<a_rect()<<endl;
		break;
	case 3:
		cout<<"Area of circle : "<<a_circle()<<endl;
		break;
	default:
		cout<<"Your choice is invalid"<<endl;
		exit(0);
}

}
}