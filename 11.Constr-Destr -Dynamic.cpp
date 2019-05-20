// Constructors/ Destructors

#include<iostream>
#include<string.h>

using namespace std;

class student
{
  private:
   int *a;

   
  public:
  	
  student(int size)
  {
  	a=new int[size];
  	a[0]=1;
  	cout<<a[0]<<endl;

   } 
  
  ~student()
  {
  
     delete a;
     cout<<a[0];  //Garbage value as memory is de-allocated
     
  }  	
	
};


int main()
{

int size=5;
student s(5);


return 0;
}
