// Live objects - Where data members are initialized duing creation

#include<iostream>

using namespace std;

class test
{
private:
 string name;
 int age;
public:
 test(string n,int a)
 {
 	name=n;
 	age=a;
 }
 
 void show()
 {
   cout<<name<<" "<<age<<endl;
 }	
	
};


int main()
{

test *t=new test("David",30);
t->show();
delete t;


 
 return 0;
}
