#include<iostream>
using namespace std;

class A 
{
	private :
		    int a;
		    
	public  :
		    void put(int x)
		    {
		    	this->a = x;
			}
			
			void get()
			{
				cout <<"A is "<<this->a<<endl;
			}
			
			A operator+(A m)
			{
				A tem;
				tem.a = this->a + m.a;
				
				return tem;
			} 
            
};

int main()
{
	A a1,a2,a3;
	  a1.put(22);
	  a2.put(11);
	  a1.get();
	  a2.get();
	  
	  a3 = a1+a2;
	  
	  a3.get();
	  
	return 0;
}
