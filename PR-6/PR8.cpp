#include<iostream>
using namespace std;

class A 
{
	private :
		    int K;
		    
	public  :
		    void put(int a)
		    {
		    	this->K = a;
			}
			
			void get()
			{
				cout <<"distances of KM is  "<<this->K<<endl;
			}
			
			A operator+(A m)
			{
				A tem;
				tem.K = this->K + m.K;
				
				return tem;
			} 
            
};

int main()
{
	A a1,a2,a3;
	  a1.put(12);
	  a2.put(7);
	  a1.get();
	  a2.get();
	  
	  a3 = a1+a2;
	  
	  a3.get();
	  
	return 0;
}
