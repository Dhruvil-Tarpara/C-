#include<iostream>
using namespace std;

class Message
{
	private :
		char a[];
	
	public :
		void display()
		{
			cout << "Hello Good mornig .. Welcom to my ";
		}
		
		void display(char a[])
		{
			cout << a;
		}
};

int main()
{
	Message a1;
	
	a1.display();
	a1.display("World");
}

