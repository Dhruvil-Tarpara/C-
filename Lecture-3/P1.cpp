#include<iostream>
using namespace std;

class Emp
{
	public:
	int  id;
    char name[100];
    char role[100];
    int age;
    int salary;
    int experience;
    char city[100];
    char company_name[100];
};

void main()
{
	Emp s[5];
	
	int i;
	cout <<"Enter data :"<<endl;
	for(i=1;i<=5;i++)
	{
	   cout <<"id =";
	   cin >>s[i].id;
	   cout <<"Name :";
	   cin >>s[i].name;
	   cout <<"role :";
	   cin >>s[i].role;
	   cout <<"age :";
	   cin >>s[i].age;
	   cout <<"salary :";
	   cin >>s[i].salary;
	   cout <<"experience :";
	   cin >>s[i].experience;
	   cout <<"city :";
	   cin >>s[i].city;
	   cout <<"company_name :";
	   cin >>s[i].company_name;	
	}
	
	cout <<endl<<"-------------------"<<endl;
	
	cout <<"id\t name\t role\t age\t salary\t experience\t city\t company_name"<<endl;
   for(i=1;i<=5;i++)
   {
   	cout <<s[i].id<<"\t"<<s[i].name<<"\t"<<s[i].role<<"\t"<<s[i].age<<"\t"<<s[i].salary<<"\t"<<s[i].experience<<"\t"<<s[i].city<<"\t"<<s[i].company_name<<endl;
   }
}
