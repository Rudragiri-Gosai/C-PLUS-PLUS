#include <iostream>
using namespace std;
class shape
{
public:
	float height,base;
    void get_data();
    void put_data();
};
void shape::get_data()
{
	cout<<"Enter Height of your shape in meter ::";
	cin>>height;
	cout<<"Enter Base of your shape in meter   ::";
	cin>>base;
}
void shape::put_data()
{
	cout<<"Height of your shape is "<<height<<" in meter."<<endl;
	cout<<"Base of your shape is "<<base<<" in meter."<<endl;
}
int main()
{
  	shape s1;
	s1.get_data();
	s1.put_data();	  
    return 0;
}
