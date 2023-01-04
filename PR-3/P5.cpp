#include<iostream>
using namespace std;

class acc
{
	private:
		int add;
	public:
		int a,b,c;
		
};
int main()

{
  acc a;
  
  cout<<"Enter value of a=";
  cin>>a.a;
  
  cout<<"Enter value of b=";
  cin>>a.b;
  
  a.c=a.a+a.b;
  
  cout<<"Sum="<<a.c;
  
  
  
}
