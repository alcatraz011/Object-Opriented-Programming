// Dereferencing object pointers

#include<iostream>

using namespace std;

class test
{
private:
 int a;
public:
 int b;
 test()
 {
 	cout<<"contructor\n";
 }
 
 void set(int x)
 {
 	a=10;
 	b=x;
 	cout<<a<<endl;
	 }	
	
};


int main()
{
 test &t1=*(new test());  //Reference to dynamic object 
 t1.set(10);
 cout<<t1.b<<endl;
 
 test t;
 test &t2=t;  // Reference to static objects
 t.set(100);
 cout<<t2.b<<endl;
 

 
 return 0;
}
