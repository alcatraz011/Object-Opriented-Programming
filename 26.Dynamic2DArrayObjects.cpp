// Dynamic 2D array objects

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

int row,col;
cin>>row;
cin>>col;

test *t[row];

for(int i=0;i<row;i++)
 t[i]=new test[col]();
 
t[1]->b=10;              //Investigate
cout<<t[1]->b<<endl;      

t[1][2].b=20;             //Investigate
cout<<t[1][2].b;




 
 return 0;
}
