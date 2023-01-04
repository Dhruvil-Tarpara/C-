#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int i,N;
	
	cout <<"Enter array size :";
	cin >>N;
	int a[N];

	for(i=0;i<N;i++)
	{
	  cout <<"a[" <<i<< "]=";
	  cin >>a[i];
	}
	for(i=0;i<N;i++)
	{
		a[i]=a[i]*a[i]*a[i];
	  cout <<"a[" <<i<< "]="<<a[i]<<endl;
	}
	
}
