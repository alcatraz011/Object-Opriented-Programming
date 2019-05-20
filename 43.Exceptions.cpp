// Exceptions handling

#include<iostream>

using namespace std;

class DIVIDE{};
class number
{
  private:
  	int num;
  public:
  	 int div(number n2)
  	 {
  	   if(n2.num==0)
		 throw DIVIDE();
	   else
	     return (num/n2.num);	
      }
      
    void set()
    {
    	cin>>num;
	}
  	
};



int main()
{
 number n1,n2;
 
 n1.set();
 n2.set();
 
 try
 {
 	int n = n1.div(n2);
 	cout<<n;
 }
	
	catch(DIVIDE)
	{
		cout<<"Exception";
		return (1);
	}
	
}
