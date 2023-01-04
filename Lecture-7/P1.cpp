#include<iostream>
using namespace std;

class RBI
{
	public :
		   float intrests = 7.14;
		   
		   void get()
		   {
		   	   cout <<"Rate of interests is :"<<this->intrests<<endl;
		   }
};

class SBI : public RBI
{
	public :
		
		   void geta()
		   {
		   	   cout <<"Rate of interests is :"<<this->intrests-2.14<<endl;
		   }
};

class BOB : public RBI
{
	public :
		   void getb()
		   {
		   	   cout <<"Rate of interests is :"<<this->intrests-1<<endl;
		   }
	
};

class ICIC : public RBI
{
	public :
		   void getc()
		   {
		   	   cout <<"Rate of interests is :"<<this->intrests+1.23<<endl;
		   }
};

int main()
{
	SBI s;
	BOB b;
	ICIC i;
	
	s.get();
	s.geta();
	b.getb();
	i.getc();
	return 0;
	
}
