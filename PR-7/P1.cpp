#include<iostream>
using namespace std;

class A
{
	public :
		    virtual void con() = 0;
		    virtual void put() = 0;
		    virtual void get() = 0;
};
class B : virtual public A
{
	public :
		   void con()
		   {
		   	  cout <<"Hello ....."<<endl;
		   }
};
class C : virtual public A
{
	public :
		  void put()
		  {
		  	 cout <<"Welcom to My city.."<<endl;
		  }
};
class D : public B , public C
{
	public :
		   void get()
		   {
		   	 cout <<"My name is Dhruvil..."<<endl;
		   }
};

int main()
{
	D d1;
	d1.con();
	d1.put();
	d1.get();
	
	return 0;
}
