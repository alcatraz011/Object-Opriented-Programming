// Binary operator overloading (Complex number addition/assignment)

#include<iostream>
using namespace std;

class complex
{
 private:
   int real;
   int imag;

 public:
 	complex(int r,int i)
 	{
 	 real=r;
 	 imag=i;
	 }
	 
	 void show()
	 {
	   cout<<this->real<<endl;
	   cout<<this->imag<<endl;
	 }
	
	complex operator +=(complex);
};

complex complex::operator +=(complex c)
{
  real=real+c.real;
  imag=imag+c.imag;
  return (*this);	
} 

int main()
{

 complex c1(1,2),c2(10,20);
 
 c1 += c2;
 
 c1.show();	
	
 return 0;
}
