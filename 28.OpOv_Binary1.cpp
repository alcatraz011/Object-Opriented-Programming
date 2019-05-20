// Binary operator overloading (Complex number addition)

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
	
	complex operator +(complex);
};

complex complex::operator +(complex c)
{
  complex temp(0,0);
  temp.real=real+c.real;
  temp.imag=imag+c.imag;
  return (temp);	
} 

int main()
{

 complex c1(1,2),c2(10,20),c3(0,0);
 
 c3=c1+c2;
 
 c3.show();	
	
 return 0;
}
