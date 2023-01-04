#include<iostream>
using namespace std;

class A
{
	public :
		int A = 50;
		   void Overs()
		   {
		   	 cout <<"distances of miters is :"<<A<<endl;
		   }
		
};

class B : public A
{
	public :
		int B = 28;
		   void Overs()
		   {
		   	 cout <<"distances of miters is :"<<B<<endl;
		   }
		   void Overs(int a,int b)
		   {
		   	cout <<"Total distances of miters is :"<<a+b<<endl;
		   }
};

int main()
{
	B b1;
	          b1.A::Overs();
	          b1.Overs();
	          b1.Overs(b1.A,b1.B);
	
	return 0;
}
