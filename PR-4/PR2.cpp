#include<iostream>
using namespace std;

class Collage
{
	private :
		    int clg_id;
		    char clg_name[100];
	
	public :
		   void putdata(int l)
		   {
		   	  cout<<"No : ["<<l<<"]"<<endl;
		   	  cout <<"Enter Collage ID :";
		   	  cin  >>this->clg_id;
		   	  cout <<"Enter Collage Name :";
		   	  cin  >>this->clg_name;
		   }
		
		   void getdata(int n)
		   {
		   	  cout <<n<<"\t"
				   <<this->clg_id<<"\t"
		   	       <<this->clg_name<<"\t";
		   }
		    
};

class Student
{
	private :
		    int Gr_id;
		    char name[100];
		    char corsh[100];
			char address[100];
			char email[100];
			int contact;

            Collage s1;
			
	public :
		   void putdata()
		   {
		   	  s1.putdata(1);
		   	  cout <<"Enter GR_ID :";
		   	  cin  >>this->Gr_id;
		   	  cout <<"Enter Name :";
		   	  cin  >>this->name;
		   	  cout <<"Enter Corsh :";
		   	  cin  >>this->corsh;
		   	  cout <<"Enter address :";
		   	  cin  >>this->address;
		   	  cout <<"Enter email :";
		   	  cin  >>this->email;
		   	  cout <<"Enter contact :";
		   	  cin  >>this->contact;
		   }
		   
		   static void hedar()
		   {
		   	  cout <<endl<<"No\t Collage ID\t Collage Name\t ID\t Name\t Corsh\t Address\t Email\t Contact"<<endl;
		   }
		   
		   void getdata()
		   {
		   	  s1.getdata(1);
		   	  cout <<this->Gr_id<<"\t"
		   	       <<this->name<<"\t"
		   	       <<this->corsh<<"\t"
		   	       <<this->address<<"\t"
		   	       <<this->email<<"\t"
		   	       <<this->contact<<endl;
		   }
		    
};

int main()
{
	Student S;
	        S.putdata();
	        S.hedar();
	        S.getdata();
	        
	return 0;
}
