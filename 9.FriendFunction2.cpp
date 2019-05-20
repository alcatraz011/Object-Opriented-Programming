// Friend function/class implementation

#include <iostream>

using namespace std;

class boy;

class girl
{
	int x=100;
  
  public:
  	void func2(boy);
	
};

class boy
{
  private:
   int a=10;
  public:
   void func(int x)
   {
   	cout<<x<<endl;
	}	
friend void girl::func2(boy b1);	
};

void girl::func2(boy b1)
{
  cout<<b1.a;
//  cout<<this->x;
}



int main()
{

 boy b1;
 girl g1;
 
 g1.func2(b1);
 	
	
 return 0;
}
