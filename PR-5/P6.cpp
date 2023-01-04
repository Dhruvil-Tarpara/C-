#include<iostream>
using namespace std;

class Emp
{
	public :
		 int id;
         char name[50];
         char role[50];
         int experience;
         int salary;
         char addres[100];
         char company_name[100];
         char email[100];
         int contact;
		 
		 void put()
		 {
		 	cout <<"Enter id :";
		 	cin  >>this->id;
		 	cout <<"Enter name :";
		 	cin  >>this->name;
		 	cout <<"Enter role :";
		 	cin  >>this->role;
		 }
};

class B : public Emp
{
	  public:
	  	
	  	  void putb()
		 {
		 	Emp::put();
		 	cout <<"Enter salary :";
		 	cin  >>this->salary;
		 	cout <<"Enter experience :";
		 	cin  >>this->experience;
		 }
};

class C  : public B
{
	public :
		
		  void putc()
		 {
		 	B::putb();
		 	cout <<"Enter company_name :";
		 	cin  >>this->company_name;
		 	cout <<"Enter addres :";
		 	cin  >>this->addres;
		 }
	  	
};

class D : public C
{
	public :
		
		   void putd()
		   {
		 	 C::putc();
		 	cout <<"Enter email :";
		 	cin  >>this->email;
		 	cout <<"Enter contact :";
		 	cin  >>this->contact;
		   }
		   
		   static void hedar()
		   {
		   	 cout <<"ID"<<"\t"
				  <<"Name"<<"\t"
				  <<"Role"<<"\t"
				  <<"Salary"<<"\t"
				  <<"Experience"<<"\t"
				  <<"company_name"<<"\t"
				  <<"Addres"<<"\t"
				  <<"Email"<<"\t"
				  <<"Contact"<<endl;
		   }
		   
		   void getdata()
		   {
		   	 cout <<this->id<<"\t"
				  <<this->name<<"\t"
				  <<this->role<<"\t"
				  <<this->salary<<"\t"
				  <<this->experience<<"\t"
				  <<this->company_name<<"\t"
				  <<this->addres<<"\t"
				  <<this->email<<"\t"
				  <<this->contact<<endl;
		   }
};

int main()
{   
    D e;
      e.putd();
      D::hedar();
      e.getdata();
	return 0;
}
