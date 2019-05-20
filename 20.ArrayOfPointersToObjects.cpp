// Array of pointers to objects

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
 	a=x;
 	cout<<a<<endl;
 }	
	
};


int main()
{

test *t[10];

t[0]=new test();
t[0]->set(2);

t[9]=new test();
t[9]->set(4);

 
 return 0;
}
