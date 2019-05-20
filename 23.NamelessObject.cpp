//  Nameless object

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
  	complex add(complex temp)
  	{
  	 real=real+temp.real;
  	 imag=imag+temp.imag;
  	 
  	 return complex(real,imag);
	}
    void show()
    {
      cout<<real<<" "<<imag;
	}
};

int main()
{
 complex c1(1,5),c2(2,10),c3(0,0);
 
 c3=c1.add(c2);
 c3.show();
	
 return 0;
}
