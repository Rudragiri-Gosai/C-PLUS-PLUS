#include<iostream>
using namespace std;

class vehicle
{
	public:
		vehicle()
		{
			cout<<"this is a vehicle"<<endl;
		}
		
};
class fourwheeler
{
	public:
		fourwheeler()
		{
			cout<<"fourwheeler is a vehicle"<<endl;
		}
		
		
};

class car : public vehicle,public fourwheeler
{
	public:
		car()
		{
			cout<<"car is a vehicle"<<endl;
		}
		
		
};

int main()
{
	car obj;
	return 0;
}
