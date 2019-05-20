//Data conversion - Conversion among objects 

#include<iostream>
using namespace std;

//class kelvin;
class degree
{
  private:
  	int deg;
  public:
  	degree()
  	{
  	  deg=0;
	}
  	
  	int retDeg()
  	{
  	  return(deg);
	}
	
	void set(int d)
	{
		 deg=d;
	}
	
	void show()
	{
		cout<<"Degree= "<<deg<<endl;
	}
	
};

class kelvin
{
  private:
  	int kel;
  public:
  	kelvin(int k)
  	{
  		kel=k;
	  }
	
	kelvin(degree d)
	{
	  kel=d.retDeg() - 273;
	}
	
	operator degree()
	{
		degree d;
		d.set(kel+273);
		return d;
	}
	
	void show()
	{
	   cout<<"Kelvin= "<<kel<<endl;
	}
 	
};



int main()
{
degree d1;
d1.set(100);
kelvin k1(0);

k1=d1;
k1.show();

kelvin k2(-100);
degree d2;

d2=k2;
d2.show();
	
 return 0;
}




