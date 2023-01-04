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
			cout<<"Enter hours :";
			cin >>HH;
			cout<<"Enter minuttes :";
			cin >>MM;
			cout<<"Enter second :";
			cin >>SS;
		}
	void put()
		{
			cout <<endl<<"hours :"<<HH<<endl<<"minuttes :"<<MM<<endl<<"second :"<<SS<<endl;
		}
};

main()
{
	Time s1,s2,s3;
	
	s1.get();
	s2.get();
	s1.put();
	s2.put();
	
	s3.SS = s1.SS+s2.SS;
	s3.MM = s1.MM+s2.MM +(s3.SS/60);
	s3.HH = s1.HH+s2.HH +(s3.MM/60);
	
	s3.SS%=60;
	s3.MM%=60;
	
	
	cout<<"Total time :"<<endl<<"HH : MM : SS = "<<endl<<s3.HH<<" : "<<s3.MM<<" : "<<s3.SS;
}
