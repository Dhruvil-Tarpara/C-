#include<iostream>
using namespace std;

int array(int c[],int d[],int m)
{
	int i;
	for(i=0 ; i<m ; i++)
	{
		c[i] = c[i] + d[i];
		d[i] = c[i] - d[i];
		c[i] = c[i] - d[i];
	}
	
	cout << endl << "A array elements after swapping :" << endl;
	for(i=0 ; i<m ; i++)
	{
		cout << "a["<<i<<"] = " << c[i] << endl;
	}
	
	cout << endl << "B array elements after swapping :" << endl;
	for(i=0 ; i<m ; i++)
	{
		cout << "b["<<i<<"] = " << d[i] << endl;
	}
}

main()
{
	int i,n;
	cout << "Enter how many elements in array = ";
	cin >> n;
	int a[n],b[n];
	
	cout << endl << "Enter A array elements :" << endl;
	for(i=0 ; i<n ; i++)
	{
		cout << "a["<<i<<"] = ";
		cin >> a[i];
	}
	
	cout << endl << "A array elements are :" << endl;
	for(i=0 ; i<n ; i++)
	{
		cout << "a["<<i<<"] = " << a[i] << endl;
	}
	
	cout << endl << "Enter B array elements :" << endl;
	for(i=0 ; i<n ; i++)
	{
		cout << "b["<<i<<"] = ";
		cin >> b[i];
	}
	
	cout << endl << "B array elements are :" << endl;
	for(i=0 ; i<n ; i++)
	{
		cout << "b["<<i<<"] = " << b[i] << endl;
	}
	
	array(a,b,n);
}

