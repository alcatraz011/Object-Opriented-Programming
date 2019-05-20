// Virtual function basics

#include<iostream>
#include<stdio.h>

using namespace std;

class father
{
 private:
 	int age;
 public:
 	//FunctionPointer  *__vptr;
 	father(int a)
 	{
 	 age=a;
	}
	
	virtual void show()
	{
	  cout<<"Father age "<<age<<endl;
	}
};

class son:public father
{
 private:
 	int age;
 public:
 	son(int a, int b):father(b)
 	{
 	 age=a;
	}
	
	void show()
	{
	  cout<<"Son age "<<age<<endl;
	}
};


int main()
{
	
father *fp;
fp=new father(100);
fp->show();

fp=new son(50,100);
fp->show();         // Calling son's 'show()'



//((son*)fp)->show();   // To access son if virtual function is not defined
 
	
 return 0;
}
