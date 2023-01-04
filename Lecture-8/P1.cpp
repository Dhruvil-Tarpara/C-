#include<iostream>
using namespace std;

class Method
{
	public :
		
		void operations(int a,int b)
		{
			cout <<"2 arguments pass perform division is :"<<a/b<<endl;
		}
		
		void operations(int a,int b,int c)
		{
			cout <<"3 arguments pass perform subtraction is :"<<a-b-c<<endl;
		}
		
		void operations(int a,int b,int c,int d)
		{
			cout <<"4 arguments pass perform multiplication is :"<<a*b*c*d<<endl;
		}
		
		void operations(int a,int b,int c,int d,int e)
		{
			cout <<"5 arguments pass perform addition is :"<<a+b+c+d+e<<endl;
		}
		
};

int main()
{
	int A,B,C,D,E;
	
	cout <<"Enter value of A,B,C,D and E :";
	cin  >>A>>B>>C>>D>>E;
	Method m1;
	       m1.operations(A,B);
	       m1.operations(A,B,C);
	       m1.operations(A,B,C,D);
	       m1.operations(A,B,C,D,E);
	return 0;
}
