// Inheritance - Member initialization with constructors
#include<iostream>
using namespace std;
class student
{
 private:
 	int a;
 public:
 	int x;
 	student(int q)
 	{
 	 cout<<"Inside base-constructor\n";
 	 x=q; 
	 } 
/*	~student()
 	{
 	 cout<<"Inside base-destructor\n";
	 } */
 protected:
 	int b;
};

class david:public student
{
 private:
 	int c;
 public:
 	david(int x):c(x),student(x)
 	{
 	 cout<<"Inside derived constructor 1\n";
	  cout<<c<<endl;	
	}
	
/*	~david()
 	{
 	 cout<<"Inside derived destructor 1\n";	
	} */
};

class ron:public david
{
	public:
	ron(int x):david(9)
	{
	 cout<<"Inside derived constructor 2\n";	
	}
/*	~ron()
	{
	 cout<<"Inside derived destructor 2\n";	
	} */
		
};


int main()
{
	
 //david ob();
 //ron();
 ron r(5);

	
 return 0;
}
