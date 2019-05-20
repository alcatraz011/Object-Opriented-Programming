// Global Friend function

#include <iostream>

using namespace std;

class boy;

class girl
{
 private:
 	int a=20;
  
 friend void func2(boy,girl);
	
};

class boy
{
  private:
   int a=10;

	
friend void func2(boy,girl);	
};

void func2(boy b1,girl g1)
{
  cout<<b1.a + g1.a;
}



int main()
{

 boy b1;
 girl g1;
 
 func2(b1,g1);
 	
	
 return 0;
}
