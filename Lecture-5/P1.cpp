#include<iostream>
using namespace std;

class Hotel
{
	private :
	
	        int id;
	        char name[100];
            int rating; 
            int establish_year;
            int staff_quantity;
            int room_quantity;
			
	public  :
	        
		    static char type[50];
		    static char location[100];
		    
		    void put(int n)
		    {
		    	cout<<"Hotel No.:"<<n<<endl;
		    	cout <<"Hotel id :";                        cin >>this->id;
		    	cout <<"Hotel Name :";                      cin >>this->name;
		    	cout <<"Hotel rating(10 out of) :";         cin >>this->rating;
		    	cout <<"Hotel establish_year :";            cin >>this->establish_year;
		    	cout <<"Hotel staff_quantity(10 out of) :"; cin >>this->staff_quantity;
		    	cout <<"Hotel room_quantity(10 out of) :";  cin >>this->room_quantity;
			}
		static void hedar()
			{
				cout <<endl<<"|----------------------------------------------|"<<endl;
				cout <<"No\tID\t Name\t Type\t Rating\t Location\t establish_year\t staff_quantity\t room_quantity\t"<<endl;
			}
			void get(int n)
			{
				cout <<n<<"\t"
				     <<this->id<<"\t"
				     <<this->name<<"\t"
					 <<this->type<<"\t"
					 <<this->rating<<"\t"
					 <<this->location<<"\t\t"
					 <<this->establish_year<<"\t\t"
				     <<this->staff_quantity<<"\t\t"
				     <<this->room_quantity<<endl;
			}
};

char Hotel:: type[50]="Motel";
char Hotel:: location[100]="Surat";

int main()
{
	int i,N;
	cout<<"How mane hotels :";
	cin >>N;
	
	Hotel S[N];
	
	for(i=1;i<=N;i++)
	{
		S[i].put(i);
	}
	
	Hotel::hedar();
	
	for(i=1;i<=N;i++)
	{
		S[i].get(i);
	}
}

