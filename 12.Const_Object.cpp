//

#include<iostream>

using namespace std;

class test
{
  private:
  	int a=0;
  public:
  	void change()
  	{
  	  cout<<a<<endl;
  	  a=10;
  	  cout<<a<<endl;
	}
	
	test()
	{
	  a=5;
	}
	
	show() const   //Function must be const so that it can invoked by const object
	{
	  cout<<a<<endl;
	}
};


int main()
{
test const t1;    // const test is also fine. Data members of t1 can't be modified
test t2;

//t1.change();  //Error
//t2.change();

t1.show();
	
 return 0;
}
