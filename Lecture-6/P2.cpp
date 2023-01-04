#include<iostream>
using namespace std;

class A
{
	public :
	       float kal;	
};

class B
{
	public :
		   float far;
};

class C : public A , public B
{
	public:
		
		void put()
		{
			cout << "Convert temperature in Fahrenheit to Kelvin  :\n";
		    cout << "---------------------------------------------------\n";
			cout<<"Enter the temperature in Fahrenheit :";
			cin >>this->far;
			kal = (5.0 / 9) * (far - 32) + 273.15;
		}
		
		void get()
		{
			cout << " The temperature in Fahrenheit : " <<this->far << endl;
            cout << " The temperature in Kelvin : " <<this->kal << endl;
	        cout << endl;
		}
};

int main()
{
	C t;
	  t.put();
	  t.get();
	return 0;
}
