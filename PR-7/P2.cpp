#include<iostream>
using namespace std;

class Emp
{
	public :
		    int Ep_id;
		    char name[100];
		    int salary;
		    char co_name[100];
		    
		    void put()
		    {
		    	cout <<"Enter your Id :";
		    	cin  >>this->Ep_id;
		    	cout <<"Enter your name :";
		    	cin  >>this->name;
		    	cout <<"Enter your salary :";
		    	cin  >>this->salary;
		    	cout <<"Enter your co_name :";
		    	cin  >>this->co_name;
			}
		    virtual void getAll() = 0;
};
class B : virtual public Emp
{
	public :
		    static void hedar()
		    {
		    	cout <<"ID"<<" \t "<<"Name"<<" \t "<<"Salary"<<" \t "<<"Co_Name"<<endl;
			}
		   void getAll()
		   {
		   	  cout <<this->Ep_id<<" \t "<<this->name<<" \t "<<this->salary<<" \t "<<this->co_name<<endl;
		   }
};

int main()
{
	B b1,b2;
      b1.put();
      b2.put();
      B::hedar();
      b1.getAll();
      b2.getAll();
      
	return 0;
}
