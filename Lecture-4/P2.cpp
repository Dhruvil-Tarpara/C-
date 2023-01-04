#include<iostream>
#include<string.h>
using namespace std;

class Telly
{
	private :
	int id;
    char name[100];
    int age;
    char telecome_brand_name[100];
    int mobile_number;
    char city[100];
    char simcard_validity [100];
    
    public :
    	 
    	 void Put()
    	 {
    	 	cout <<"Enter id :";
    	 	cin  >>id;
    	 	cout <<"Enter name :";
    	 	cin  >>name;
    	 	cout <<"Enter age :";
    	 	cin  >>age;
    	 	cout <<"Enter telecome_brand_name :";
    	 	cin  >>telecome_brand_name;
    	 	cout <<"Enter mobile_number :";
    	 	cin  >>mobile_number;
    	 	cout <<"Enter city :";
    	 	cin  >>city;
    	 	cout <<"Enter simcard_validity :";
    	 	cin  >>simcard_validity;
    	 	
    	 	get();
		 }
		 
		 void get()
		 {
		 	cout <<endl<<"-----------------------"<<endl;
		 	cout <<"ID\t Name \t Age\t telecome_brand_name\t mobile_number\t city\t simcard_validity\t"<<endl;
		 	cout <<id<<"\t"<<name<<"\t"<<age<<"\t"<<telecome_brand_name<<"\t\t"<<mobile_number<<"\t"<<city<<"\t"<<simcard_validity<<"\t"<<endl;
		 }
};

int main()
{
	Telly s,s2,s3,s4,s5;
	
	s.Put();
	s2.Put();
	s3.Put();
	s4.Put();
	s5.Put();
}
