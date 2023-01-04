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
		  
		   Demo(char n[],int i,int a)
		   {
		   	   cout<<"|--------------your ditels--------------|"
				   <<endl;
		   	   this->id = i;
		   	   strcpy(this->name,n);
		   	   this->age = a;
		   	   cout <<"\t ID\t Name\t Age"<<endl;
		   	   
		   	   cout <<"\t"<<this->id<<"\t"<<this->name<<"\t"<<this->age<<endl;
		   } 
		   
		   ~Demo()
		   {
		   	   cout <<endl
				    <<"|------complete verify your details------|"<<endl;
		   }
};

int main()
{
	Demo D("Dhruvil",7030,18);
	
	return 0;
}
