#include<iostream>
using namespace std;

class Hotel
{
	private :
		    int id;
		    char name[100];
		    char type[100];
		    int staff_size;
			int room_size;
			int establish_year;
			char address[100];
			int rating;
			char website[100];

	
	public :
		   Hotel()
		   {
		   	  cout <<"Enter Hotel ID :";
		   	  cin  >>this->id;
		   	  cout <<"Enter Hotel Name :";
		   	  cin  >>this->name;
		   	  cout <<"Enter Hotel type :";
		   	  cin  >>this->type;
		   	  cout <<"Enter room_size :";
		   	  cin  >>this->room_size;
		   	  cout <<"Enter establish_year :";
		   	  cin  >>this->establish_year;
		   	  cout <<"Enter address :";
		   	  cin  >>this->address;
		   	  cout <<"Enter rating(10 out of) :";
		   	  cin  >>this->rating;
		   	  cout <<"Enter website :";
		   	  cin  >>this->website;
		   }
		   
		   static void hedar()
		   {
		   	  cout <<endl<<"No\t Hotel ID\t Name\t Type\t room_size\t establish_year\t Address\t rating\t website"<<endl;
		   }
		   
		   void getdata(int n)
		   {
		   	  cout <<n<<"\t"
				   <<this->id<<"\t"
		   	       <<this->name<<"\t"
		   	       <<this->type<<"\t"
		   	       <<this->room_size<<"\t"
		   	       <<this->establish_year<<"\t"
		   	       <<this->address<<"\t"
		   	       <<this->rating<<"\t"
		   	       <<this->website<<endl;
		   }
		    
		   ~Hotel()
		   {
		        cout <<"Thank you for visit"<<endl;	
		   } 
};

int main()
{	
	Hotel H,H2;   
	Hotel::hedar();
  	H.getdata(1);
  	H2.getdata(2);
	  
	return 0;
}
