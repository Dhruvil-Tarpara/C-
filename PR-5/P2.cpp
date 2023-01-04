#include<iostream>
using namespace std;

class A
{
	public :
		
		void get()
		{
			cout <<"hello.."<<endl<<"Wlecom to my city"<<endl;
		}
		 
         
};

class B : public A
{
	  public:
	  	    
	  	    void getb()
	  	    {
	  	    	cout <<"My name is Dhruvil";
			  }
	       	
};


int main()
{   
      B b;
        b.get();
        b.getb();
	return 0;
}
