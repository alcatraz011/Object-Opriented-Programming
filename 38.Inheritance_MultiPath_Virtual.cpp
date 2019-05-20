// Inheritance - Handling overloaded member functions

#include<stdio.h>
#include<iostream>

using namespace std;

class base1
{
  public:
  int a;
  public:
  	display_base()
  	{
  	  cout<<"Inside base 1\n";	
    }  
};

class derived1:public virtual base1   //Must be declared virtual otherwise their would be two copies of base members
{
  private:
  int a;
  public:
  	display()
  	{
  	  cout<<"Inside derived 1\n";	
    }  
};

class derived2:public virtual base1    //Must be declared virtual otherwise their would be two copies of base members
{
 private:
 	int a;
 public:
 	void display()
 	{
 	 cout<<"Inside derived 2\n";
	}
	
};

class derived12:public derived1, public derived2   
{
 private:
 	int x;
 public:
 	void display()
 	{
 	 cout<<"Inside derived 12\n";
	}
	
};




int main()
{

derived12 d;

d.display();
d.derived1::display();

d.base1::display_base(); //Accessing super base class members
d.base1::a=9;   //Accessing super base class members


	
 return 0;
}
