#include<iostream>
using namespace std;

class Emp
{
	public :
		 int A;
		 
		 void put()
		 {
		 	cout <<"Enter value of A :";
		 	cin  >>A;
		 }
};

class B : public Emp
{
	  public:
	  	
	  	  void square()
	  	  {
	  	  	cout <<endl<<"square of A is "<<(this->A * this->A)<<endl<<endl;
	      }
	  	
	       	
};

class C  : public Emp
{
	public :
		
		 void cube()
	  	  {
	  	  	cout <<endl<<"Cube of A is "<<(this->A * this->A * this->A)<<endl;
	      }
	  	
};

int main()
{   
  
    B b;
    C c;
    
    b.put();
    b.square();
    c.put();
    c.cube();
    
      
	return 0;
}
