#include<iostream>
using namespace std;

class Bank
{
	private :
		char nm[50];
		int num;
		long long int number;
		char email[50];
	public :
		void SetData()
		{
			cout << "\t\t\t\tEnter The Name Of Staff           : ";
			cin  >> nm;
		    cout << "\t\t\t\tEnter The Account Number Of Staff : ";
			cin  >> num;
			cout << "\t\t\t\tEnter The Phone Number Of Staff   : ";
			cin  >> number;
			cout << "\t\t\t\tEnter The E-mail Of Staff         : ";
			cin  >> email;
		}
		
		void GetData()
		{
			cout << "\t\t\t\tName       : " << nm     << endl;
			cout << "\t\t\t\tAccount No : " << num    << endl;
			cout << "\t\t\t\tPhone No   : " << number << endl;
			cout << "\t\t\t\tE-mail     : " << email  << endl;
		}
};

int main()
{
	Bank b;

//First page	
	cout << "\n\n\n\n\n\n";
	cout << "\t\t\t\t           -: BANK MANAGEMENT SYSTEM :-\n";
	cout << "\t\t\t\t--------------------------------------------------\n\n";

	cout << "\t\t\t\t          -: Designed And Programed By :-\n";
	cout << "\t\t\t\t--------------------------------------------------\n";
	cout << "\t\t\t\t                  Dhruvil Tarpara\n\n\n";

	cout << "\t\t\t\t                   -: Trainer :-\n";
    cout << "\t\t\t\t--------------------------------------------------\n";
	cout << "\t\t\t\t                    JAY GONDLIYA\n\n";
    cout << "\t\t\t\t\t   ";
    
	system("pause");
    system("cls");

//Second page    
    int choice;
    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t----------------------------------------------------------------\n";
    cout << "\t\t\t-: Press A to Log in as Administrator Or S to Log in as STAFF :-\n";
    cout << "\t\t\t----------------------------------------------------------------\n";
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t  ";
    cin  >>choice;
    if(choice == 'A'|| choice == 'S')
    {
    system("pause");
    system("cls");

//Third page    
    cout << "\n\n\n\n\n\n";
   	cout << "\t\t\t\t--------------------------------------------------\n";
    cout << "\t\t\t\t              -: Welcome as STAFF :-\n";
    cout << "\t\t\t\t--------------------------------------------------\n";
    cout << "\n\n";
    b.SetData();
    
    system("cls");
    }
    else
    {
    	cout <<"Error.......";
	}
//Forth page    
    cout << "\n\n\n\n\n\n";
    cout << "\t\t\t\t--------------------------------------------------\n";
    b.GetData();
    cout << "\t\t\t\t--------------------------------------------------\n\n\n";
    cout << "\t\t\t\t         Press [1] to Deposite the money:\n\n";
    cout << "\t\t\t\t         Press [2] to Transfer the money:\n\n";
    cout << "\t\t\t\t         Press [3] to Withdraw the money:\n\n";
    cout << "\t\t\t\t         Press [0] to Exit:\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t  ";
    int c,belenc = 200000;
    cout <<endl<<"Enter you Choice :";
    cin  >>c;
    
	system("pause");
    system("cls");
//Fifth page
    switch(c)
    {
    	case 1:
    		int d;
             cout << "\n\n\n\n\n\n";
             cout << "\t\t\t\t--------------------------------------------------\n";
             cout << "\t\t\t\t     Enter Deposite the money :";
             cin  >>d;
	         cout << endl<<"\t\t\t\t--------------------------------------------------\n\n";
	         cout << "\t\t\t\t     Your Actual Amount is : "<<belenc<<"\n\n";
	         cout << "\t\t\t\t     congrates Your Amount Has Deposite Successfully.\n\n";
             cout << "\t\t\t\t     Your Account Balance is : "<<belenc - d<<"\n\n";
        break;
		case 2:
    		int t;
             cout << "\n\n\n\n\n\n";
             cout << "\t\t\t\t--------------------------------------------------\n";
             cout << "\t\t\t\t     Enter Transfer the money :";
             cin  >>t;
	         cout << endl<<"\t\t\t\t--------------------------------------------------\n\n";
	         cout << "\t\t\t\t     Your Actual Amount is : "<<belenc<<"\n\n";
	         cout << "\t\t\t\t     congrates Your Amount Has Transfer Successfully.\n\n";
             cout << "\t\t\t\t     Your Account Balance is : "<<belenc - t<<"\n\n";
        break;
		case 3:
    		int w;
             cout << "\n\n\n\n\n\n";
             cout << "\t\t\t\t--------------------------------------------------\n";
             cout << "\t\t\t\t     Enter Withdraw the money :";
             cin  >>w;
	         cout << endl<<"\t\t\t\t--------------------------------------------------\n\n";
	         cout << "\t\t\t\t     Your Actual Amount is : "<<belenc<<"\n\n";
	         cout << "\t\t\t\t     congrates Your Amount Has Withdraw Successfully.\n\n";
             cout << "\t\t\t\t     Your Account Balance is : "<<belenc - w<<"\n\n";
        break;
        
        default :
        	   cout<<"something went wrong error........................"<<endl;
		break;     
   }
}
