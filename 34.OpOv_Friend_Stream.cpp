// Friend operator function for streaming data (Input/Data)

#include<iostream>
using namespace std;

class complex
{
 private:
 	int real;
 	int imag;
 public:
 	
 	complex operator +(complex c)
 	{
 	  complex temp;
	  temp.real= real+c.real;
	  temp.imag= imag+c.imag;
	  return (temp);	
	}
 	friend istream & operator >>(istream &in, complex &c);
    friend ostream & operator <<(ostream &out, complex &c);

};

istream & operator >>(istream &in, complex &c)
{
  cin>>c.real;
  cin>>c.imag;
}

ostream & operator <<(ostream &out, complex &c)
{
 cout<<c.real;
 cout<<" "<<c.imag<<endl;
}

int main()
{
complex c1,c2,c3;

cin>>c1;
cin>>c2;

c3=c1+c2;

cout<<c3;
	
 return 0;
}
