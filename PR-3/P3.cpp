#include<iostream>
using namespace std;

class Time
{
	public:
		int HH;
		int MM;
		int SS;
		
	void get()
		{
			cout<<"Enter second :";
			cin >>SS;
		}
	void put()
		{
			cout <<"second :"<<SS<<endl;
		}
};

main()
{
	Time s1,s2;
	
	s1.get();
	s1.put();
	
    
	s1.MM = (s1.SS/60);
	s1.HH = (s1.MM/60);
	s1.SS%=60;
	s1.MM%=60;
	
	
	cout<<"Total time :"<<endl<<"HH : MM : SS  "<<endl<<s1.HH<<" : "<<s1.MM<<" : "<<s1.SS;
}
