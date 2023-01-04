#include<iostream>
#include<string.h>
using namespace std;

class Con 
{
	private :
	        const float PI = 3.14;
	        int R;
	        
	public :
	       void put()
		   {   cout <<"Find area of circle.."<<endl;
		   	   cout<<"Enter R :";
		   	   cin >>R;
		   	   system("cls");
		   }        
		   void get()
		   {
		   	  cout <<"area of circle is "<<PI * R * R;
		   }
};

int main()
{
	Con c;
	    c.put();
	    c.get();
	    
	return 0;    
}
