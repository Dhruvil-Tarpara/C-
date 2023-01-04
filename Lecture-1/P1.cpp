#include<iostream>
using namespace std;

main()
{
	int i,N;
	cout <<"Enter array size :";
	cin >>N;
	
	int a[N];
	cout <<"Enter array :" <<endl;
	for(i=0;i<N;i++)
	{
		cout <<"a["<<i<<"]"<<"=";
		cin >>a[i];
	}
	
	cout <<"|-----------|"<<endl;
	
	for(i=0;i<N;i++)
	{
		if(a[i]%2==0)
		cout <<"a["<<i<<"]"<<"="<<a[i]<<endl;
	}
	
}
