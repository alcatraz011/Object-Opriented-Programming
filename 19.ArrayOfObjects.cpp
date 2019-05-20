// Array of objects

#include<iostream>

using namespace std;

class test
{
private:
 string name;
 int age;
public:
	
 test()
 {
 }
 
 void set(string n,int a)
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

test t[10];

t[0].set("Soumik",28);
t[0].show();

t[9].set("David",28);
t[9].show();


 
 return 0;
}
