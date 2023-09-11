#include<iostream>
using namespace std;
class Distance{
	private:
		float inch;
		float feet;
	public:
		void get_distance()
		{
			cout<<"Enter value in Inch :";
			cin>>inch;
			cout<<"Enter value in Feet:";
			cin>>feet;
		}
		void put_distance()
		{
			cout<<"Inch is ::"<<inch<<endl;
			cout<<"Feet is ::"<<feet<<endl;
		}
};
int main()
{
	Distance d1;
	d1.get_distance();	
	d1.put_distance();
	return 0;
}
