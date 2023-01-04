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
		   
		   Demo(Demo &D)
		   {
		   	  this->id = D.id;
		   	  strcpy(this->name,D.name);
		   	  this->age = D.age;
		   	  cout<<"|--------------copy ditels--------------|"
				   <<endl;
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
	Demo D1("kevin",7000,16);
	Demo D2("kishan",7020,18);
	Demo D3(D);
	
	return 0;
}
