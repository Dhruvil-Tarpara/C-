#include <iostream>
using namespace std;

inline table(int b)
{
	int i=1,t;
	while(i<=10)
	{
		t=b*i;
		cout<<b<<"*"<<i<<"="<<t<<endl;
		i++;
	}
	
}
int main()
{
	int n;
	cout <<"Enter any number=";
	cin>>n;
	table(n);
}
