#include<iostream>
using namespace std;

class Admin
{
	private :
		    int total_annual_revenue;
		    char can_terminate[100];
		    
	public  :
	        void MyAccess1()
	        {
	        	cout<<"total_annual_revenue :";
	        	cin >>this->total_annual_revenue;
	        	cout<<"can_terminate :";
	        	cin >>this->can_terminate;
			}
			
			void getdata()
	        {
	        	cout <<this->total_annual_revenue<<" \t\t "<<this->can_terminate<<endl;
			}
	
};
class Manager : public Admin
{
	protected :
		      int total_staff;
		      int manager_salary;
};
class Employee : public Manager
{
	protected :
		      int employee_salary;
		      char company_name[100];
	public   :	      
		      void MyAccess()
	        {
	        	cout<<"total_staff :";
	        	cin >>this->total_staff;
	        	cout<<"manager_salary :";
	        	cin >>this->manager_salary;
	        	cout<<"employee_salary :";
	        	cin >>this->employee_salary;
	        	cout<<"company_name :";
	        	cin >>this->company_name;
	        }
			 
			static void hedar()
			{
				cout <<endl
				     <<"company_name"<<" \t "
				     <<"employee_salary"<<" \t "
					 <<"manager_salary"<<" \t "
					 <<"total_staff"<<" \t "
					 <<"total_annual_revenue"<<" \t "
					 <<"can_terminate"<<endl;
			} 
			void getdata()
	        {
	        	cout <<this->company_name<<" \t\t "<<this->employee_salary<<" \t\t "
				     <<this->manager_salary<<" \t\t "<<this->total_staff<<" \t\t ";
				     
				 Admin::getdata();
			}
};

int main()
{
	Employee e1;
	
	e1.MyAccess();
	e1.MyAccess1();
	Employee::hedar();
	e1.getdata();
	return 0;
}
