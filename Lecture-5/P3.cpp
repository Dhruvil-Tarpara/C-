#include<iostream>
#include<string.h>

using namespace std;

class Compani
{
     public :
     	    int id;
            char name[100];
            int staff_quantity;
            int revenue;
            int import_diamonds;
            int export_diamonds;
            char ceo[100];
			
	 Compani(int a,char b[],int c,int d,int e,int f,char g[])
	 {
	 	this->id = a;
	 	strcpy(this->name , b);
	 	this->staff_quantity = c;
	 	this->revenue = d;
	 	this->import_diamonds = e;
	 	this->export_diamonds = f;
	 	strcpy(this->ceo , g);
	 }		
	 
	 static void hedar()
	 {
	 	cout <<"ID\t Name\t staff_quantity\t revenue\t import_diamonds\t export_diamonds\t ceo_Name"<<endl;
	 }
	 
	 void get()
	 {
	 	cout <<this->id<<"\t"
		     <<this->name<<"\t\t"
			 <<this->staff_quantity<<"\t"
			 <<this->revenue<<"\t\t\t"
			 <<this->import_diamonds<<"\t\t"
			 <<this->export_diamonds<<"\t\t"
			 <<this->ceo<<endl;
	 }
};

int main()
{
	int i,N,id,staff_quantity,revenue,import_diamonds,export_diamonds;
	char name[100],ceo[100];
	
	cout <<"Enter Companis :";
	cin  >>N;
	
	for(i=1;i<=N;i++)
	{
		cout <<"Enter comp_id :";
		cin  >>id;
		cout <<"Enter comp_name :";
		cin  >>name;
		cout <<"Enter comp_staff_quantity :";
		cin  >>staff_quantity;
		cout <<"Enter comp_revenue (per year) :";
		cin  >>revenue;
		cout <<"Enter import_diamonds (per year) :";
		cin  >>import_diamonds;
		cout <<"Enter export_diamonds (per year) :";
		cin  >>export_diamonds;
		cout <<"Enter ceo Name :";
		cin  >>ceo;
		
		Compani c1(id,name,staff_quantity,revenue,import_diamonds,export_diamonds,ceo);
		
		cout<<endl<<"|------------------------------------------------------------------|"<<endl;
			   	Compani::hedar();
			    c1.get();
		cout<<endl<<"|------------------------------------------------------------------|"<<endl;

	}
	
	
	return 0;
}
