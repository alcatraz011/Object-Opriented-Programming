//  'this' pointer - 2

#include<iostream>

using namespace std;
class complex 
{
  private:
  	int real;
  	int imag;
  public:
  	complex(int real,int imag)
  	{
  	  this->real=real;
	  this->imag=imag;	
	}

    void show()
    {
     cout<<this->real<<" ";
     cout<<this->imag;
	}
};

int main()
{
complex c1(1,5);

c1.show();	
	
 return 0;
}
