#include<iostream>
using namespace std;

void wel();
void password();
void biling();

class Item
{
	public :
		   int item_no;
		   char item_name[100];
		   int quntity;
		   int amount;
		   
		   void putdata()
		   {
		   	   cout <<"Enter Item Number :";
		   	   cin  >>this->item_no;
		   	   cout <<"Enter Item Name :";
		   	   cin  >>this->item_name;
		   	   cout <<"Enter Quantity :";
		   	   cin  >>this->quntity;
		   	   cout <<"Enter Amount :";
		   	   cin  >>this->amount;
		   }
		   
		   static void had()
		   {
		   	  cout <<endl<<endl<<"Item Number \t Item Name \t Quantity \t Amount"<<endl;
		   }
		   
		   void getdata()
		   {
		   	   cout <<this->item_no<<"\t"
		   	        <<this->item_name<<"\t"
		   	        <<this->quntity<<"\t"
					<<this->amount<<endl;
		   }
		   
};

int main()
{
	int i,N,total;
	
	wel();
	password();
	
	cout<<"Enter how many item parchej :";
	cin >>N;
	
	Item c[N];
	
	for(i=1;i<=N;i++)
	{
		system("cls");
		cout <<"I["<<i<<":"<<N<<"]"<<endl;
		c[i].putdata();
		if(c[i].quntity>=1)
		{
			c[i].amount = c[i].amount * c[i].quntity;
			total = c[i].amount + total;
		}
	}
	system("cls");
	cout <<endl<<"your item Details...."<<endl<<endl;
	Item::had();
	
	for(i=1;i<=N;i++)
	{
		c[i].getdata();
	}
	system("cls");
	biling();
	int taxAmount,discount,AfterDiscount,totalamount;
	
	discount = total * 10 / 100;
	AfterDiscount = total - discount;
	taxAmount = AfterDiscount * 8 /100;
	totalamount = AfterDiscount + taxAmount;
	Item::had();
	for(i=1;i<=N;i++)
	{
		c[i].getdata();
	}
	
	cout <<"---------------------------------------------------------"<<endl
         <<"Total Amount____________________________________"<<total<<endl
		 <<"Discount (10%)__________________________________"<<discount<<endl
		 <<"AfterDiscount___________________________________"<<AfterDiscount<<endl
		 <<"Tax cgst,sgst (8%)______________________________"<<taxAmount<<endl
		 <<"Total___________________________________________"<<totalamount<<endl
		 <<"----------------------------------------------------------"<<endl;
 	
	return 0;
}

void biling()
{
	cout <<"\t\t|----------------------------------------------------------|"<<endl
	     <<"\t\t<<<<<<<<<<<<<Mivana Supermarket Billing System>>>>>>>>>>>>>>"<<endl
		 <<"\t\t|----------------------------------------------------------|"<<endl;
}

void wel()
{
	cout <<"\t\t|----------------------------------------------------------|"<<endl
	     <<"\t\t<<<<<<<<<<<<<<<<Welcom to Mivana Supermarket>>>>>>>>>>>>>>>>"<<endl
		 <<"\t\t|----------------------------------------------------------|"<<endl;
}

void password()
{
	int P;
	int C = 123456789;
	char U[50];
	
	cout <<endl
	     <<"Verify your User Id And Password.."
	     <<endl
	     <<"|--------------------------------------------------------------------"<<endl;
	cout <<"User_ID  :";
	cin  >>U;
	cout <<"Passwoed :";
	cin  >>P;
	
	if(P==C)
	{
		cout<<endl<<"\t\t<<<<<-----login successfully----->>>>>";
		system("cls");
		biling();
    }     
    else
    {
    	cout<<endl<<"\t\t\t   ERROR!!!!!"<<endl;
		cout<<endl<<"\t\t<<<<<<<<------wrong password------>>>>>>>>";
		system("cls");
		main();
	}
}

