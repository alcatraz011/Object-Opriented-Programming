// Binary operator overloading (Adding two strings)

#include<iostream>
#include<string.h>
using namespace std;

class str
{
 private:
   char name[50];

 public:
 	str(char* temp)
 	{
      strcpy(name,temp);
	 }
	 
  void show()
	 {
        cout<<name<<endl;
	 }
	
	str operator +(str temp)
	{
	  str t(" ");
	  strcpy(t.name,this->name);
	  strcat(t.name,temp.name);
	  
	  return(t);
	}

};


int main()
{
  str s1("hello"),s2(" soumik"),s3(" ");
  
  s3=s1+s2;
  
  s3.show();

	
 return 0;
}
