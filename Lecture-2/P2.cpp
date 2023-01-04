#include<iostream>
using namespace std;

int add(int m,int n)
{
	cout << "Addition is = " << m+n;
}
int sub(int m,int n)
{
	cout << "Substraction is = " << m-n;
}
int mul(int m,int n)
{
	cout << "Multiplication is = " << m*n;
}
int div(int m,int n)
{
	cout << "Division is = " << m/n;
}
int mod(int m,int n)
{
	cout << "Modulus is = " << m%n;
}

main()
{
	int a,b,choice;
    cout << "Enter value of a = ";
	cin >> a;
	cout << "Enter value of b = ";
	cin >> b;
	do
	{
	cout << "Press 1 for addition" << endl;
	cout << "Press 2 for Substraction" << endl;
	cout << "Press 3 for Multiplication" << endl;
	cout << "Press 4 for Division" << endl;
	cout << "Press 5 for Modulus" << endl;
	cout << "Press 0 for Exit" << endl;
	
	cout <<endl<<"Enter your choice :";
	cin >> choice;
	

	    switch(choice)
	    {
		    case 1:
			        add(a,b); cout <<endl;
			        break;
		    case 2:
			        sub(a,b);cout <<endl;
			        break;
		    case 3:
			        mul(a,b);cout <<endl;
			        break;
		    case 4:
			        div(a,b);cout <<endl;
			        break;
		    case 5:
			        mod(a,b);cout <<endl;
			        break;
		    case 6:
			        cout << "Enter 0 for exit...";cout <<endl;
			        break;
		    default:
		            cout << "Enter valid value...";
					cout <<endl;	   	   	   	   	  
	    }
    } 
	while(choice!=0);
	
}
