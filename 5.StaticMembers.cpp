// Static variable and functions

#include <iostream>

using namespace std;

class base
{
 private:
   int static const pr=0;
 	
 public:
 	static int pub;
 	int temp;
 	
 static void func()
 {
  pub=1;
 }
 
  void func2()
  { 
 //   pub=5;
  	pub++;
  	cout<<pub<<endl;
  }
  
 	
};


int base::pub=0;  //Must be defined here using ::

int main()
{

 base b1,b2,b3;
 b1.func();
 b1.func2();
 b2.func2();
 
 cout<<b3.pub;
	
 return 0;
}
