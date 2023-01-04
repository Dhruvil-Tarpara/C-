#include<iostream>
using namespace std;

class one
{
	public :
		 int width;
         int height;
         
           one()
           {
           	  cout <<"Enter width :";
           	  cin  >>this->width;
           	  cout <<"Enter height :";
           	  cin  >>this->height;
		   }
};

class B : public one
{
	  public:
	  	   B() :one()
	  	   {
	  	   	 cout <<"Triangle area is "<<(0.5 * this->width * this->height)<<endl;
		   }
	       	
};

class C : public one
{
	public :
		   C() :one()
	  	   {
	  	   	 cout <<"Rectangle area is "<<( this->width * this->height)<<endl;
		   }
};

int main()
{   
    B b;
    C c;
      
	return 0;
}
