#include<iostream>
using namespace std;

class Emp
{
	public :
		 int id;
         char name[50];
         int Age;
};

class B  
{
	  public:
	  	   int salary;
           char post[100];
           char company_name[100];
	       	
};

class C  : public Emp,public B
{
	public :
		   void putdata()
	  	   {
	  	   	 cout <<"Enter id :";
	  	   	 cin  >>this->id;
	  	   	 cout <<"Enter Name :";
	  	   	 cin  >>this->name;
	  	   	 cout <<"Enter Age :";
	  	   	 cin  >>this->Age;
	  	   	 cout <<"Enter salary :";
	  	   	 cin  >>this->salary;
	  	   	 cout <<"Enter post :";
	  	   	 cin  >>this->post;
	  	   	 cout <<"Enter company_name :";
	  	   	 cin  >>this->company_name;
		   }
		   
		   static void hedar()
		   {
		   	   cout <<"ID \t Name \t Age \t salary \t post \t company_name"<<endl;
		   }
		   
		   void getdata()
	  	   {
	  	   	 cout  <<this->id<<" \t "<<this->name<<" \t "<<this->Age<<" \t "
			 	   <<this->salary<<" \t "<<this->post<<" \t "<<this->company_name<<endl;
		   }
};

int main()
{   
  
    C c;
      c.putdata();
      C::hedar();
      c.getdata();
    
      
	return 0;
}
