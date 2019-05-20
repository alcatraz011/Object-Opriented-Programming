// Inheritance - Handling overloaded member functions

#include<stdio.h>
#include<iostream>

using namespace std;

class base1
{
  private:
  int a;
  public:
  	display()
  	{
  	  cout<<"Inside base1\n";	
    }  
};

class base2
{
  private:
  int a;
  public:
  	display()
  	{
  	  cout<<"Inside base2\n";	
    }  
};

class derived:public base1,public base2
{
 private:
 	int a;
 public:
 	void display()
 	{
 	 cout<<"Inside derived\n";
 	 base1::display();          // Access base class functions from derived classes
	}
	
};


int main()
{

derived d;
d.display();  //To access derived class function

d.base2::display();  //To access base class function
	
	
 return 0;
}
