#include<iostream>
#include<string.h>

using namespace std;

class Cafe
{
     public :
     	    int id;
            char name[100];
            char cafe_type[100];
            int rating;
            char location[100];
            int establish_year;
            int staff_quantity;
			
	 Cafe()
	 {
	 	cout <<"Enter cafe_id :";
		cin  >>this->id;
		cout <<"Enter cafe_name :";
		cin  >>this->name;
		cout <<"Enter cafe_type :";
		cin  >>this->cafe_type;
		cout <<"Enter cafe_rating :";
		cin  >>this->rating;
		cout <<"Enter cafe_location :";
		cin  >>this->location;
		cout <<"Enter cafe_establish_year :";
		cin  >>this->establish_year;
		cout <<"Enter cafe_staff_quantity :";
		cin  >>this->staff_quantity;
	 }		
	 
	 static void hedar()
	 {
	 	cout <<"No\t Cafe_id\t Name\t cafe_type\t rating\t location\t establish_year\t staff_quantity"<<endl;
	 }
	 
	 void get(int n)
	 {
	 	cout <<this->id<<"\t"
		     <<this->name<<"\t\t"
			 <<this->cafe_type<<"\t\t"
			 <<this->rating<<"\t\t"
			 <<this->location<<"\t\t"
			 <<this->establish_year<<"\t\t"
			 <<this->staff_quantity<<endl;
	 }
};

int main()
{
	int i,N;
	
	cout <<"Enter Cafe number :";
	cin  >>N;
	
	for(i=1;i<=N;i++)
	{
		Cafe c;
		Cafe::hedar();
	    c.get(i);

	}
	
	return 0;
}
