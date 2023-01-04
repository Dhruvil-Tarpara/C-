#include<iostream>
using namespace std;

class Sum
{
	public :
		Sum()
		{
			cout << "\n\n\t\t\t\tWelcome in maths..." << endl;
		}
		
		Sum(int k)
		{
			cout << "\n\n\t\tValue of k = " << k << endl;
		}
		
		Sum(int l,int m)
		{
			cout << "\t\tAddition of " << l <<  " and " << m << " is " << (l+m) << endl;
		}
		
		Sum(int n,int o,int p)
		{
			cout << "\t\tAddition of " << n <<  "," << o << " and " << p << " is " << (n+o+p) << endl;
	    }
	    
	    Sum(int k,int l,int m,int n,int o,int p)
	    {
	    	cout << "\t\tAddition of " << k <<  "," << l << "," << m << "," << n << "," << o << " and " << p << " is " << (k+l+m+n+o+p) << endl;
		}
};

int main()
{
	int a,b,c,d,e,f;
	
	cout << "Enter value of a = ";
	cin  >> a;
	cout << "Enter value of b = ";
	cin  >> b;
	cout << "Enter value of c = ";
	cin  >> c;
	cout << "Enter value of d = ";
	cin  >> d;
	cout << "Enter value of e = ";
	cin  >> e;
	cout << "Enter value of f = ";
	cin  >> f;
	
	system("cls");
	
	Sum A;
	Sum A1(a);
	Sum A2(b,c);
	Sum A3(d,e,f);
	Sum A4(a,b,c,d,e,f);
	
}

