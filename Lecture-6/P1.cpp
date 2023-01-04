#include<iostream>
using namespace std;

class Scal_1
{
	public :
	       int a,b,c;	
};

class Scal_2 : public Scal_1
{
	public:
		
		void put()
		{
			cout<<"Enter value of A :";
			cin >>this->a;
			cout<<"Enter value of B :";
			cin >>this->b;
			cout<<"Enter value of C :";
			cin >>this->c;
		}
		
		void get()
		{
			cout<<"A   :   B   :   C"<<endl
			    <<"-----------------"<<endl
			    <<this->a<<"   :   "<<this->b<<"   :   "<<this->c;
		}
};

int main()
{
	Scal_2 s;
	       s.put();
	       s.get();
	
	return 0;
}
