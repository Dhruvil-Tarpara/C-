#include<iostream>
#include<string.h>
using namespace std;

class Std
{
	private :
	int id;
    char name[100];
    int age;
    char course[100];
    char email[100];
    char city[100];
    char college[100];
    
    public :
    	 
    	 void Put()
    	 {
    	 	cout <<"Enter id :";
    	 	cin  >>id;
    	 	cout <<"Enter name :";
    	 	cin  >>name;
    	 	cout <<"Enter age :";
    	 	cin  >>age;
    	 	cout <<"Enter course :";
    	 	cin  >>course;
    	 	cout <<"Enter email :";
    	 	cin  >>email;
    	 	cout <<"Enter city :";
    	 	cin  >>city;
    	 	cout <<"Enter college :";
    	 	cin  >>college;
    	 	
    	 	get();
		 }
		 
		 void get()
		 {
		 	cout <<endl<<"-----------------------"<<endl;
		 	cout <<"ID\t Name \t Age\t course\t email\t city\t college\t"<<endl;
		 	cout <<id<<"\t"<<name<<"\t"<<age<<"\t"<<course<<"\t"<<email<<"\t"<<city<<"\t"<<college<<"\t"<<endl;
		 }
};

int main()
{
	Std s,s2,s3,s4,s5;
	
	s.Put();
	s2.Put();
	s3.Put();
	s4.Put();
	s5.Put();
}
