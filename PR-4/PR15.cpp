#include<iostream>
using namespace std;

class Bita;
class Gama
{
	public :
		  int a,b;
		  
		  void put()
		  {
		  	cout <<"Enter value A and B :";
		  	cin  >>a>>b;
		  }
		  
	friend void Bita();  	  
};

class Bita 
{
	public :
		  Gama g;
		  void adi()
		  {
		  	g.put();
		  	cout <<endl<<"Addition of A and B is "<<g.a+g.b;
		  }
};

int main()
{
	Bita b;
	     b.adi();
	
	return 0;
}
