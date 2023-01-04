#include<iostream>
#include<string.h>
using namespace std;

class Demo  
{
	private :
	        int gr_id;
            char name[50];
            int roll_no;
            int class_no;
            int age;
    
    public :
    	
    	   Demo()
    	   {
		   	   cout<<"The process of attendance is ongoing";
		   	   cout<<endl
		   	       <<"|-----------------------------------|"<<endl;
		   }
		  
		   Demo(char n[],int i,int r,int c,int a)
		   {
		   	   this->gr_id = i;
		   	   strcpy(this->name,n);
		   	   this->roll_no = r;
		   	   this->class_no = c;
		   	   this->age = a;
		   	   cout <<"GR_ID\t Name\t Roll_No\t class_No\t Age"<<endl;
		   	   
		   	   cout <<this->gr_id<<"\t"<<this->name<<"\t"<<this->roll_no<<"\t"<<this->class_no<<"\t"<<this->age<<endl;
		   } 
		   
		   Demo(Demo &D)
		   {
		   	   this->gr_id = D.gr_id;
		   	   strcpy(this->name,D.name);
		   	   this->roll_no = D.roll_no;
		   	   this->class_no = D.class_no;
		   	   this->age = D.age;
		   	   cout<<"|--------------copy ditels--------------|"
				   <<endl;
		   	   cout <<"GR_ID\t Name\t Roll_No\t class_No\t Age"<<endl;
		   	   
		   	   cout <<this->gr_id<<"\t"<<this->name<<"\t"<<this->roll_no<<"\t"<<this->class_no<<"\t"<<this->age<<endl;
		   }
		   
		   ~Demo()
		   {
		   	   cout <<endl
				    <<"|------complete verify your details------|"<<endl;
		   }
};

int main()
{
	Demo d;
	Demo D("Dhruvil",7030,34,304,18);
	Demo D1("kevin",7000,16,301,16);
	Demo D2("kishan",7020,27,304,18);
	Demo D3(D);
	
	return 0;
}
