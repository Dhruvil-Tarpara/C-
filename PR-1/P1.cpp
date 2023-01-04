#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char a[10];
	int b=0,c=0,i;
	
	cout <<"Enter string :";
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>=97 && a[i]<=122)
		{
			b++;
		}
		else if(a[i]>=65 && a[i]<=87)
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	
	if(b>=1)
	{
		cout <<"string is not numeric";
	}
	else if(c>=1)
	{
		cout <<"string is numeric";
	}
	else
	{
		cout <<"string is numeric or char";
	}
}
