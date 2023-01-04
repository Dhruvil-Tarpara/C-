#include<iostream>
using namespace std;

class car
{
	public:
	int id;
    char company_name[100];
    char color[100];
    char model[20];
    int release_year;
};

int main()
{
	car s[4];
	
	int i;
	cout <<"Enter data :"<<endl;
	for(i=1;i<=4;i++)
	{
	   cout <<"id =";
	   cin >>s[i].id;
	   cout <<"company_name :";
	   cin >>s[i].company_name;
	   cout <<"color :";
	   cin >>s[i].color;
	   cout <<"model :";
	   cin >>s[i].model;
	   cout <<"release_year :";
	   cin >>s[i].release_year;
	}
	cout <<endl<<"-------------------"<<endl;
	
   cout <<"id\t company_name\t color\t model\t release_year"<<endl;
   for(i=1;i<=4;i++)
   {
   	cout <<s[i].id<<"\t"<<s[i].company_name<<"\t"<<s[i].color<<"\t"<<s[i].model<<"\t"<<s[i].release_year<<endl;
   }
}
