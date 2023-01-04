#include<iostream>
using namespace std;

class Emp
{
	private :
		    int id;
		    char name[100];
		    char role[100];
		    int salary;
			int experience;
			char address[100];
			char email[100];
			int contact;
	
	public :
		   void putdata(int l)
		   {
		   	  cout<<"No : ["<<l<<"]"<<endl;
		   	  cout <<"Enter ID :";
		   	  cin  >>this->id;
		   	  cout <<"Enter Name :";
		   	  cin  >>this->name;
		   	  cout <<"Enter role :";
		   	  cin  >>this->role;
		   	  cout <<"Enter salary :";
		   	  cin  >>this->salary;
		   	  cout <<"Enter experience :";
		   	  cin  >>this->experience;
		   	  cout <<"Enter address :";
		   	  cin  >>this->address;
		   	  cout <<"Enter email :";
		   	  cin  >>this->email;
		   	  cout <<"Enter contact :";
		   	  cin  >>this->contact;
		   }
		   
		   static void hedar()
		   {
		   	  cout <<endl<<"No\t ID\t Name\t Role\t Salary\t Experience\t Address\t Email\t Contact"<<endl;
		   }
		   
		   void getdata(int n)
		   {
		   	  cout <<n<<"\t"
				   <<this->id<<"\t"
		   	       <<this->name<<"\t"
		   	       <<this->role<<"\t"
		   	       <<this->salary<<"\t"
		   	       <<this->experience<<"\t"
		   	       <<this->address<<"\t"
		   	       <<this->email<<"\t"
		   	       <<this->contact<<endl;
		   }
		    
};

int main()
{
	int i;
	Emp e1,e2,e3,e4,e5;
	
	    e1.putdata(1);
	    e2.putdata(2);
	    e3.putdata(3);
	    e4.putdata(4);
	    e5.putdata(5);
    
	Emp::hedar();
	
	   e1.getdata(1);
	   e2.getdata(2);
	   e3.getdata(3);
	   e4.getdata(4);
	   e5.getdata(5);
  	
	return 0;
}
