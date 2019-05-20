// Copy constructor
#include<iostream>
#include<String>

using namespace std;

class student
{

private:
 int a;
 
public:
 student()
 {
 	a=10;
  }
  
  student(int x)
  {
  	a=x;
  }	
  
  ~student()
  {
  	cout<<"Destrcutor\n";
  }
	 
 show()
 {
 	cout<<a<<endl;
 }
	
};


int main()
{
 student *s1,*s2;
// student *s3,s4;
 s1=new student;
 s2=new student(100);
 
 s1->show();
 s2->show();
 
// s3=&s4;

// (*s3).show();  //Deferancing pointer

delete s1;
delete s2;


 s1->show();
 s2->show();
 
	
 return 0;
}
