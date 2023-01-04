#include<iostream>
using namespace std;

class dist
{
	public:
		int feet;
		int inch;
		
	void get()
		{
			cout<<"Enter feet :";
			cin >>feet;
			cout<<"Enter inch :";
			cin >>inch;
		}
	void put()
		{
			cout <<endl<<"feet :"<<feet<<endl<<"inch :"<<inch;
		}
};

main()
{
	dist s1,s2,s3;
	
	s1.get();
	s2.get();
	s1.put();
	s2.put();
	
	s3.feet = s1.feet+s2.feet;
	s3.inch = s1.inch+s2.inch;
	
	if(s3.inch > 12)
	{
		s3.inch-=12;
		s3.feet++;
	}
	
	cout<<"Total feet and inch :"<<endl<<"feet is = "<<s3.feet<<endl<<"inch is = "<<s3.inch;
}
