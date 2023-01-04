#include<iostream>
using namespace std;

class A
{
     public: 
		  void over()
		  {
		  	cout<<"my name is dhruvil."<<endl;
		  }	
};

class B : public A
{
	public:
		  void over()
		  {
		  	A::over();
		  	cout<<"I am flutter developer.."<<endl;
		  }
};

class C : public B
{
	public:
		  void over()
		  {
		  	B::over();
		  	cout<<"visit in red and withe.."<<endl;
		  }
};

int main()
{
	C c1;
	  c1.over();
    
   return 0;
}
