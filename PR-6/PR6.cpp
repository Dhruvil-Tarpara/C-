#include<iostream>
using namespace std;

class A 
{
	private :
		    int a,b;
		    
	public  :
		    void put(int x,int y)
		    {
		    	this->a = x;
		    	this->b = y;
			}
			
			void get()
			{
				cout <<"A is "<<this->a<<endl;
				cout <<"B is "<<this->b<<endl;
			}
			
			A operator++()
			{
				A tem;
				tem.a = ++a;
				tem.b = ++b;
				
				return tem;
			} 
			
			A operator--()
			{
				A tem1;
				tem1.a = --a;
				tem1.b = --b;
				
				return tem1;
			} 
            
};

int main()
{
	A a1,a2,a3;
	  a1.put(22,44);
	  a1.get();
	  
	  a2 = ++a1;
	  a3 = --a2;
	  
	  a2.get();
	  a3.get();
	  
	return 0;
}
