#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	int rollNo;
	string MobileNo;
	
public:
	string address,name;
	Student(string add,string n)
	{
	cout<<"These code is for Displaying students details:"<<endl;
	address=add;
	name=n;
	}

	void setRollNo(int a)
	{
	rollNo=a;
	}
	
	void setMob(string b)
	{
	MobileNo=b;
	}
	
	void getData()
	{
	
	cout<<"Enter the students Address :"<<address<<endl;
	cout<<"Enter the students Name :"<<name<<endl;
	cout<<"Enter student roll.no :"<<rollNo<<endl;
	cout<<"Enter student mobile number :"<<MobileNo<<endl;

	}

	~Student()
	{
	cout<<"Code is Deleted";
	}
};

int main()
{
Student s1("pune","mike");
s1.setRollNo(10);
s1.setMob("8899443354");
s1.getData();
}