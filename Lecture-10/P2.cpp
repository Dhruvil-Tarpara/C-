#include<iostream>
using namespace std;


class A
{
   public:
   	 virtual void calculate()=0;
    
   	
};
class B:virtual public A
{
	public:
   	virtual void calculate()=0;
};
class C:virtual public A
{
	public:
   	 virtual void calculate()=0;
};
class D:virtual public B,virtual public A
{
	public:
		int r=10;
		int h=5;
		int b=10;
		void calculate()
		{
			cout<<"Area of circle:"<<3.14*r*r<<endl;
			cout<<"Area of triangle:"<<0.5*b*h<<endl;
			cout<<"Area of rectangle:"<<b*h<<endl;
			
		}
		
};
int main()
{
	D d;
	d.calculate();
	
}
