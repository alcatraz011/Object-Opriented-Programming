// Unary operator overloading (Prefix/Postfox)

#include<iostream>
using namespace std;

class incr
{
private:
 int var=0;
 
public:

void operator ++()     //Prefix
{
  var=var+1;
//  cout<<"Prefix\n";	
}

void operator ++(int)   //Postfix
{
  var=var+1;	
 // cout<<"Postfix\n";
}

void show()
{
 cout<<var<<endl;
}
	
};

int main()
{
  incr ob1;
  ++ob1;
  ob1.show();
  ob1++;
  ob1.show();
	
 return 0;
}
