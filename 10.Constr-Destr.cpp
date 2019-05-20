// Constructors/ Destructors

#include<iostream>
#include<string.h>

using namespace std;

class student
{
  private:
   int a;
   char ch[10];
   
  public:
  student()
  {
  	a=10;
  	cout<<"In no-argument constructor\n";
   } 
   
  student(int x=5,int y=10)        // Default arguments in constructor
  {
  	cout<<x+y<<endl;
  	cout<<"In one-argument constructor\n";
  }
  
   student(char *temp)
  {
  	  strcpy(ch,temp);
	  cout<<temp<<endl;
  }
  
  ~student()
  {
  	//cout<<a<<endl;
  	cout<<"In destructor\n";
  }
    
  	
	
};


int main()
{
//student s; 
//student(5);
student s1("Soumik");
//cout<<&s<<endl;
//s.~student();
//cout<<&s<<endl;

return 0;
}
