// Class and objects

#include<iostream>
#include<string.h>

using namespace std;

class student
{
 private:
 	int marks;
 	int total=0;

 public:
 	void setdata(int);
 	void add(student);
 	void display();
	
};

void student::setdata(int a)
{
  marks=a;	
}

void student::add(student s)
{
	total=marks+s.marks;
}

void student::display()
{
	cout<<total<<endl;
}

int main()
{
  student s1,s2;
  s1.setdata(50);
  s2.setdata(100);
  
  s1.add(s2);
  
  s1.display();
  s2.display();
	
 return 0;
}
