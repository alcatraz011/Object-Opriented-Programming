// Overloading '=' for dynamic object members  (Deep copy)

#include<iostream>
#include<string.h>
using namespace std;

class student
{

public:

string *name;

student(string sname)
{	
 name= new string(sname);
 cout<<"Normal constructor\n";
}

void operator =(student &s)   //Operator overloading
{
  *name=*(s.name);
  cout<<"Overloaded operator\n";
}


student(student &s)        //Copy constructor
{
 name = new string(*(s.name));
  cout<<"Copy constructor\n";
}


void change(string newname)
{
  *name=newname;	
}
	
	
};


int main()
{
 student s1("Soumik");
 
/* student s2(s1);  // Equivalent to student s2=s1;
 
 cout<<*(s1.name)<<endl;
 cout<<*(s2.name)<<endl;
 
 s1.change("David");
 
 cout<<*(s1.name)<<endl;
 cout<<*(s2.name)<<endl; */
 
 
  student s3("Don");
  cout<<*(s3.name)<<endl;
  
  s3=s1;                    // Calls overator overloading
  cout<<*(s3.name)<<endl;
  
  s1.change("Ron");
  cout<<*(s3.name)<<endl;
  
  
  student s4=s1;             // Calls copy constructor
  student s5(s1);            // Calls copy constructor
	
 return 0;
}
