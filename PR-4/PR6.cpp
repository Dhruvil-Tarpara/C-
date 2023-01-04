#include<iostream>
#include<string.h>
using namespace std;

class Demo  
{
	private :
	        int id;
            char name[50];
            int age;
    
    public :
		  
		   Demo()
		   {
		   	   cout<<"|-----------Enter your ditels------------|"<<endl;
		   	   cout<<"Enter your Name :";
		   	   cin >>this->name;
		   	   cout<<"Enter ID :";
		   	   cin >>this->id;
		   	   cout<<"Enter Age :";
		   	   cin >>this->age;
		   	   
		   	   cout <<"ID\t Name\t Age"<<endl;
		   	   
		   	   cout <<this->id<<"\t"<<this->name<<"\t"<<this->age<<endl;
		   } 
		   
		   ~Demo()
		   {
		   	   cout <<endl
				    <<"|------complete verify your details------|"<<endl;
		   }
};

int main()
{
	Demo D;
	
	return 0;
}
