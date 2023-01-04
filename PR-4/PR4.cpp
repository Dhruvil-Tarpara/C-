#include<iostream>
#include<string.h>
using namespace std;

class HighSchool 
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
			           <<"|                       H_i_g_h_S_c_h_o_o_l                     |";
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

char HighSchool::stu_edu_institute_name [50] = "Ashdeep_group_of_school";

class College  
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
			           <<"|                       C_O_L_L_E_G_E                           |";
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

char College::stu_edu_institute_name[50]="B.M.U";

int main()
{
	HighSchool H;
	College C;
	
	H.Putdata();
	HighSchool::hedar();
	H.getdata();
	
	C.Putdata();
	College::hedar();
	C.getdata();
}
