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
		if(N[i]=='a' || N[i]=='e' || N[i]=='i' || N[i]=='o' ||N[i]=='u' ||N[i]=='A' ||N[i]=='E'||N[i]=='I' ||N[i]=='O' ||N[i]=='U' )
		{
			cout << "character is vowel" <<endl;
		}
		else
		{
			cout << "character is consonant"<<endl;
		}
	}
	
}
