// Pointer to object members

#include<iostream>

using namespace std;

class test
{
 public:
 int a;
 void set(int x)
 {
   a=x;
 }
};


int main()
{

int test::*p; //Declare
p=&test::a;	//Define

void (test::*func_ptr)(int)=&test::set; //Declare and Define

test t;
t.*p=10;  //Accessing members using static objects
cout<<t.*p<<endl;

(t.*func_ptr)(100);
cout<<t.a<<endl;

test *tn=new test();

tn->*p=50;  //Accessing members using static objects
cout<<tn->*p<<endl;

(tn->*func_ptr)(500);
cout<<tn->a<<endl;


	
 return 0;
}
