#include<iostream>
using namespace std;

class Bike 
{
public:
	int avg, price;
	Bike()
	{
		cout<<"This functions cotain features of Bike"<<endl;
	}
	
	void set_data(int a,int b)
	{
		avg=a;
		
		price=b;
		
	}
	
	void display()
	{
		cout<<"Average of the Bike is:"<<avg<<endl;
		cout<<"Price of the Bike is:"<<price<<endl;
	}
	
	~Bike()
	{
		cout<<"The given data is erased"<<endl;
	}
};

int main()
{
Bike s1;
int a,b;
cin>>a;
cin>>b;
s1.set_data(a,b);
s1.display();
}