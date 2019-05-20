// Binary operator overloading (Complex number addition)

#include<iostream>
using namespace std;

class complex
{
 private:
   int real;
   int imag;

 public:
 	complex(int r)
 	{
 	  real=r;
	 }
 	complex(int r,int i)
 	{
 	 real=r;
 	 imag=i;
	 }
	 
	 void show()
	 {
	   cout<<this->real;
	   cout<<" "<<this->imag<<endl;
	 }
	
	friend complex operator +(complex,complex);
};

complex operator +(complex t1, complex t2)
{
  complex temp(0,0);
  temp.real=t1.real+t2.real;
  temp.imag=t1.imag+t2.imag;
  return (temp);	
} 

int main()
{

 complex c1(1,2),c2(10,20),c3(0,0);
 
 c3=c1+c2;
 c3.show();	
 
 c3=c1+10;
 c3.show();
 
 c3=20+c2;
 c3.show();
	
 return 0;
}
