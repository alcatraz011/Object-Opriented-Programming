// Class and objects

#include<iostream>
#include<string.h>

using namespace std;

class student
{
 private:
 	int age;
 	string name;

 public:
 	void setdata(int, string);
 	void getdata();
 	student(int x)
 	{
 		cout<<"Inside constructor\n";
	 }
	
};

void student::setdata(int a, string n)
{
  age=a;
  name=n;	
}

void student::getdata()
{
	cout<<age<<endl;
	cout<<name;
}

int main()
{
  student s1(8);
  s1.setdata(10,"soumik");
  s1.getdata();
	
 return 0;
}
