#include<iostream>
#include<string.h>
using namespace std;

class School 
{
	private :
	        int id;
            char name[50];
            int roll_No;
            int age;
            char standard[50];
            int contact;
            char address[50];
    
    public :
    	 
    	   static char stu_edu_institute_name [50];
    	   
    	 void Putdata()
    	 {
    	 	cout <<"Enter id :";
    	 	cin  >>this->id;
    	 	cout <<"Enter name :";
    	 	cin  >>this->name;
    	 	cout <<"Enter Roll_No :";
    	 	cin  >>this->roll_No;
    	 	cout <<"Enter std_standard :";
    	 	cin  >>this->standard;
    	 	cout <<"Enter age :";
    	 	cin  >>this->age;
    	 	cout <<"Enter contact :";
    	 	cin  >>this->contact;
		 }
		 
		 static void hedar()
		 {  
		    cout <<endl<<"|---------------------------------------------------------------|"<<endl
			           <<"|                    S_t_u_d_e_n_t__D_a_t_a                     |";
		 	cout <<endl<<"|---------------------------------------------------------------|"<<endl;
		 	cout <<"ID\t Name \t Roll_No\t Standard\t age\t contact\t stu_edu_institute_name\t"<<endl;
		 }
		 
		 void getdata()
		 {
		 	cout <<this->id<<"\t"
			     <<this->name<<"\t"
				 <<this->roll_No<<"\t"
				 <<this->standard<<"\t"
				 <<this->age<<"\t"
				 <<this->contact<<"\t"
				 <<this->stu_edu_institute_name<<endl;
		 }
};

char School::stu_edu_institute_name [50] = "Ashdeep_group_of_school";

int main()
{
	int i,N;
	cout<<"Enter student Numbers :";
	cin >>N;
	
	School H[N];
	
	for(i=1;i<=N;i++)
	{
		H[i].Putdata();
	}
	
	School::hedar();
	
	for(i=1;i<=N;i++)
	{
		H[i].getdata();
	}
}
