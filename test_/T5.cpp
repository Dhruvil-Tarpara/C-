#include<iostream>
using namespace std;

class A
{
     public:
	       int ID;
		   char name[100];
		   char cours[100];
		   int age;	
		   
};

class B : public A
{
	public:
		  void putdata()
		  {
		  	cout<<"Enter ID :";
		  	cin >>this->ID;
		  	cout<<"Enter Name :";
		  	cin >>this->name;
		  	cout<<"Enter cours :";
		  	cin >>this->cours;
		  	cout<<"Enter Age :";
		  	cin >>this->age;
		  }
};

class C : public A
{
	public:
		  void hedar()
		  {
		     cout<<endl<<"ID"<<" \t "
		         <<"Name"<<" \t "
		         <<"cours"<<" \t "
		         <<"Age"<<endl;
		  }
};

class D : public B , public C
{
	public:
		void getdata()
		  {
		    cout<<B::ID<<" \t "
		        <<B::name<<" \t "
		        <<B::cours<<" \t "
		        <<B::age<<endl;
		  }
};

int main()
{
    D d1;
      d1.putdata();
      d1.hedar();
      d1.getdata();
   return 0;
}
