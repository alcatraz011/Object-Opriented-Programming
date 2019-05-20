// Copy constructor
#include<iostream>
#include<String>

using namespace std;

class student
{

public:

string *name;

student(string sname)
{
 cout<<"Normal constructor\n";	
 name= new string(sname);
}

student(student &s)
{
 cout<<"Copy constructor\n";
 name = new string(*(s.name));
 	
}

void change(string newname)
{
  *name=newname;	
}
	
	
};


int main()
{
 student s1("Soumik");
 
 student s2(s1);  // Equivalent to student s2=s1;
 
 cout<<*(s1.name)<<endl;
 cout<<*(s2.name)<<endl;
 
 s1.change("David");
 
 cout<<*(s1.name)<<endl;
 cout<<*(s2.name)<<endl;
	
	
 return 0;
}
