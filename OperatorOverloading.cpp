#include<iostream>

using namespace std;

class length
{
	private : int feet;
			  int inches;
			  
	public :  void readData()
			  {
			  	cout<<"\n ENTER FEET : ";
			  	cin>>feet;
			  	
			  	cout<<" ENTER INCHES : ";
				cin>>inches;
				
			  }
			  void showData()
			  {
			  	cout<<"\n LENGTH VALUE : "<<feet<<" feets and "<<inches<<" inches ";
			  }
			  friend bool operator< (const length &Ob1, const length &Ob2)
			  {
			  	if(Ob1.feet < Ob2.feet)
				{
				  	return 0;
			    }
				else if(Ob2.feet < Ob1.feet)
				{
					return 0;
				}	
				else if(Ob2.feet == Ob1.feet)
				{
					if(Ob2.inches == Ob1.inches)
					{	
						return 1;
					}
			}
				   
			  }
			  
};

int main()
{
	length Ob1,Ob2;
	cout<<"\n ENTER VALUES OF LENGTH 1 : ";
	Ob1.readData();
	cout<<"\n ENTER VALUES OF LENGTH 2 : ";
	Ob2.readData();
	if(Ob1 < Ob2)
	{
		Ob1.showData();
		Ob2.showData();
		cout<<"\n THE GIVEN VALUES OF LENGTH ARE EQUAL ";
	}
	else 
	{
		Ob1.showData();
		Ob2.showData();
		cout<<"\n THE GIVEN VALUES OF LENGTH ARE NOT EQUAL ";
	}
	return 0;
}
