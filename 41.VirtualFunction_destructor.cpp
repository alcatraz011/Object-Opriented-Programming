// Virtual destructor

#include<iostream>

using namespace std;

class father
{
 private:
 	int age;
 public:
 	father(int a)
 	{
 	 age=a;
 	 cout<<"Father Consructor\n";
	}
	
	virtual ~father()
 	{
 	 cout<<"Father destructor\n";
	}
	
	
	
	virtual void show()
	{
	  cout<<"Father age "<<age<<endl;
	}
};

class son:public father
{
 private:
 	int age;
 public:
 	son(int a, int b):father(b)
 	{
 	 cout<<"Son constructor\n";
 	 age=a;
	}
	
	~son()
 	{
 	 cout<<"Son destructor\n";
	}
	
	void show()
	{
	  cout<<"Son age "<<age<<endl;
	}
};


int main()
{
	
father *fp;
//fp=new father(100);

fp=new son(50,100);
fp->show();

delete fp;  // Virtual to destroy both base and derived class object


 
	
 return 0;
}
