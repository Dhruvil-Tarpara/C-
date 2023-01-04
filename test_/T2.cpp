#include<iostream>
#include<string.h>
using namespace std;

class bank
{
	public:
		   int N;
		   int Ac_Number = 12345678;
		   char Ac_name[100] = "Dhruvil_tarpara";
		   char Ac_types[100] = "seving";
		   char Ac_Branch[100] = "Mota_varachha";
		   int Ac_Balance = 500000;
		   
	void put()
	{
		cout<<"Enter Account Number :";
		cin >>N;
	}	   
	
	void get()
	{
		system ("pause");
		system ("cls");
		
		cout<<"Account Number : "<<this->Ac_Number<<endl
		    <<"Account Name : "<<this->Ac_name<<endl
		    <<"Account types : "<<this->Ac_types<<endl
		    <<"Account Branch : "<<this->Ac_Branch<<endl
		    <<"Account Balance : "<<this->Ac_Balance<<endl;
	}
};

int main()
{
	bank b1;
	     b1.put();
	     
	     if(b1.N == b1.Ac_Number)
	     {
	     	b1.get();
		 }
		 else
		 {
		 	cout<<endl<<"wrong Account Number.."<<endl<<"try again...";
		 }
	return 0;
}
