#include<iostream>
using namespace std;

class T20Match
{
	public :
		int A = 20;
		   void Overs()
		   {
		   	 cout <<"T20Match Total Overs is :"<<A<<endl;
		   }
		
};

class TestMatch : public T20Match
{
	public :
		int B = 90;
		   void Overs()
		   {
		   	 cout <<"TestMatch Total Overs is :"<<B<<endl;
		   }
		   void Overs(int a,int b)
		   {
		   	cout <<"TestMatch Total Overs is :"<<a+b<<endl;
		   }
};

int main()
{
	TestMatch b1;
	          b1.T20Match::Overs();
	          b1.Overs();
	          b1.Overs(b1.A,b1.B);
	
	return 0;
}
