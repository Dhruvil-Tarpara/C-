#include<iostream>
using namespace std;

int fact(int);

main()
{
	int i,N;
	
	cout <<"enter array size :";
	cin >>N;
	int a[N],b[N];
	
	for(i=0;i<N;i++)
	{
		cout <<"a["<<i<<"] = ";
		cin >> a[i];
	}
	for(i=0;i<N;i++)
	{
		cout <<"a["<<i<<"]="<<a[i]<<"\t";
		b[i]=fact(a[i]);
		cout <<"b["<<i<<"]="<<b[i]<<endl;
	}

	
}

int fact(int b)
{
	 if(b==1)
	 {
	 	return 1;
	 }
	 else
	 {
	 	return b*fact(b-1);
	 }
}
