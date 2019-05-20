// Exceptions handling - List of exceptions

#include<iostream>

using namespace std;
class POSITIVE{};
class NEGATIVE{};
class ZERO{};


class number
{
  private:
  	int num;
  public:	
  	
  	 void print() throw (POSITIVE,NEGATIVE,ZERO)
  	 {
  	   if(num > 0)
		 throw POSITIVE();
	   else if(num < 0)
		 throw NEGATIVE();
		else
		 throw ZERO();	 
      }
      
    void set()
    {
    	cin>>num;
	}
  	
};



int main()
{
 number n1;
 n1.set();
 
 try
 {
 	 n1.print();
 }
	
	catch(POSITIVE)
	{
		cout<<"Postive number";
		return (1);
	}
	
	catch(...)
	{
		cout<<"All other number";
		return (1);
	} 
	
return 0;	
}
