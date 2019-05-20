// Pure Virtual function

#include<iostream>
#include<stdio.h>

using namespace std;

class father
{
 private:
 	int age;
 public:
 	father(int a)
 	{
 	 age=a;
	}
	
	virtual void show()=0;
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
//fp=new father(100);  // Won't work as father is an abstract class(have pure virtual function)
//fp->show();

fp=new son(50,100);
fp->show();         // Calling son's 'show()'



//((son*)fp)->show();   // To access son if virtual function is not defined
 
	
 return 0;
}
