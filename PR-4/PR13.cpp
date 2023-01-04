#include<iostream>
using namespace std;

class Railway_system
{
	private :
		    double Tr_no;
		    char   Tr_name[100];
		    char   source[100];
		    char   desti[100];
		    char   steat[50];
		    int    Tr_time;
	public  :
	        
			void hedar()
			{
				cout <<"\t\t|*********************************************************|"<<endl
				     <<"\t\t|                                                         |"<<endl
				     <<"\t\t|----------WELCOM TO RAILWAY RESERVATION SYSTEM-----------|"<<endl
				     <<"\t\t|                                                         |"<<endl
				     <<"\t\t|*********************************************************|"<<endl;
			}	    
			
			void putdata()
			{
				cout <<"Enter Train Number :";
				cin  >>this->Tr_no;
				cout <<"Enter Train Name :";
				cin  >>this->Tr_name;
				cout <<"Enter Source :";
				cin  >>this->source;
				cout <<"Enter Destination :";
				cin  >>this->desti;
				cout <<"Enter Steat :";
				cin  >>this->steat;
				cout <<"Enter Train Time :";
				cin  >>this->Tr_time;
			}
			
			void hold()
			{
				system("cls");
				cout <<"\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl
				     <<"\t\t|                                                         |"<<endl
				     <<"\t\t|>>>>>>>>>>>>>>>>RAILWAY RESERVATION SYSTEM<<<<<<<<<<<<<<<|"<<endl
				     <<"\t\t|                                                         |"<<endl
				     <<"\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
			}
			
			void method()
			{
				cout <<endl<<endl<<"Train_Number\t|Train_Name\t|Source\t|Destination\t|Steat\t|Train_Time|"<<endl;
			}
			
			void getdata()
			{
				cout <<this->Tr_no<<"\t|"
				     <<this->Tr_name<<"\t|"
					 <<this->source<<"\t|"
					 <<this->desti<<"\t|"
					 <<this->steat<<"\t|"
				     <<this->Tr_time<<"|"<<endl;
			}
			
			void record()
			{
				cout <<"Record By Train Number"<<endl
				     <<"05348-"<<this->steat<<endl
				     <<"55338-"<<this->steat<<endl
				     <<"22188-"<<this->steat<<endl
				     <<"02052-"<<this->steat<<endl;
				     
				     cout <<endl<<"\t\t|----THANK YOU FOR  VISIT RAILWAY RESERVATION SYSTEM------|"<<endl;
			}
			
//			static void thank()
//			{
//				system("cls");
//				cout <<endl<<"|----THANK YOU FOR  VISIT RAILWAY RESERVATION SYSTEM------|"<<endl;
//			}
};

int main()
{
	Railway_system r;
	
	r.hedar();
	r.putdata();
	r.hold();
	r.method();
	r.getdata();
	r.record();
	
	return 0;
}
