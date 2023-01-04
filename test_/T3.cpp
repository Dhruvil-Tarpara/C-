#include<iostream>
using namespace std;

int main()
{
    int A,B;
    char sol[] = "cannot division by zero";
    
    cout <<"Enter value of A :";
    cin  >>A;
    cout <<"Enter value of B:";
    cin  >>B;
    
    try
    {
    	if(A==0||B==0)
    	{
    		throw sol;
		}
		else
		{
			cout <<"division is :"<<A/B;
		}
	}
	catch(char n[])
	{
		cout << n;
	}
	catch(...)
	{
		cout <<"Undifined error...";
	}
    
   return 0;
}

