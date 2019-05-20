//Data conversion - Basic to User Defined  || User defined to basic

#include<iostream>

using namespace std;

class meter
{
  private:
  	int length;
  public:
  meter()
  {
  	length=0;
  }
  
  meter(int l)
  {
  	length=l* 0.01;    //Coverting cm to m
  	cout<<"constructor 1\n";
  }
  
  operator int()
  {
  	cout<<"operator\n";
  	int temp;
  	temp=length*100;
  	return(temp);
  	
  }
  void set(int l)
  {
  	length=l;
  }
  
  void display()
  {
  	cout<<length<<" meter\n";
  }
};

int main()
{
  meter m1;
  int length=500;
  m1=length;
  m1.display();	
  
  m1.set(2);
  length=m1;
  cout<<length<<" centimeter";
	
 return 0;
}




