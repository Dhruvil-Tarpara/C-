#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int i;
	char N[10];
	
	cout <<"Enter string :";
	gets(N);

	for(i=0;i<strlen(N);i++)
	{
			if(N[i]>=97 && N[i]<=122)
		{
			N[i]=N[i]-32;
		}
		else
		{
			a[i]=N[i]+32;
		}
	}
	
	cout <<"|-----------|"<<endl;
	
	puts(N);
	
}
