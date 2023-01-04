#include<iostream>
using namespace std;

class A
{
	public :
		   int a = 10,b = 16,c = 56;
		   
		   void get()
		   {
		   	   cout <<"A = "<<this->a<<endl
		   	        <<"B = "<<this->b<<endl
		   	        <<"C = "<<this->c<<endl;
		   }
};

class B : public A
{
	public :
		   int d =77;
		   
		   void getb()
		   {
		   	   cout <<"D = "<<this->d<<endl;
		   }
};

class C : public A
{
	public :
		    int e=23;
		   
		   void getc()
		   {
		   	   cout <<"E = "<<this->e<<endl;
		   }
	
};

class D : public B,public C 
{
	public :
		  int ans;
		  
		   void getd()
		   {
		   	  this->ans = this->B::a + this->B::b + this->B::c + this->d + this->e;
		   	  cout << "different number’s sum is "<<this->ans;
		   }
};

int main()
{
	D ANS;
	  ANS.B::get();
	  ANS.getb();
	  ANS.getc();
	  ANS.getd();
	return 0;
	
}
