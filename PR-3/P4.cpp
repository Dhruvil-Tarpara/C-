#include<iostream>
using namespace std;
class house
{
	public:
	int no,bhk,sq_ft;
	char add[50];
	
};
int main()
{
	house a[5];
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"Enter House no=";
		cin>>a[i].no;
		
		cout<<"Enter House bhk=";
		cin>>a[i].bhk;
		
		cout<<"Enter House sq_ft=";
		cin>>a[i].sq_ft;
		
		cout<<"Enter House add=";
		cin>>a[i].add;
	}
	
	cout<<"No"<<"\t"<<"bhk"<<"\t"<<"sq_ft"<<"\t"<<"Add"<<"\t"<<endl;
	for(i=0;i<2;i++)
	{	
	 cout<<a[i].no<<"\t"<<a[i].bhk<<"\t"<<a[i].sq_ft<<"\t"<<a[i].add<<endl;		
    }
}
