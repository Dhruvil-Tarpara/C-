#include<iostream>
using namespace std;

class dhruvil;

class kishan
{
	private : 
	 	int HH=2;
	 	int MM=23;
	 	int SS=25;
	 	
	friend void time(kishan, dhruvil);
};

class dhruvil
{
	private : 
	 	int HH=5;
	 	int MM=42;
	 	int SS=54;
	 	
	friend void time(kishan, dhruvil);
};

void time(kishan s1,dhruvil s2)
{
	int h,m,s;
	
	cout<< "HH" << ":" << "MM" << ":" <<"SS" << endl;
	cout<<    s1.HH << ":" << s1.MM << ":" << s1.SS << endl;
	
	cout<< "HH" << ":" << "MM" << ":" <<"SS" << endl;
	cout<<    s2.HH << ":" << s2.MM << ":" << s2.SS << endl;
	
	s=s1.SS + s2.SS;
	m=s1.MM + s2.MM + s/60; 
	h=s1.HH + s2.HH + m/60;
		
	s=s%60;
	m=m%60;
	
	cout<< "HH" << ":" << "MM" << ":" <<"SS" << endl;
	cout<<    h << ":" << m << ":" << s;
}

int main()
{
	kishan s1;
	dhruvil  s2;
	time(s1,s2); 
}
