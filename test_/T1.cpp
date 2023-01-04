#include<iostream>
using namespace std;

int fact(int);
int main()
{
    int N,ans;
    
    cout <<"Enter factorial Number :";
    cin  >>N;
    
    ans = fact(N);
    
    cout <<endl<<"-------------------------"
	     <<endl<<"factorial is :"<<ans<<endl;
    
    
   return 0;
}

int fact(int a)
{
	if(a<=0)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
