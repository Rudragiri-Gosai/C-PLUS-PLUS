#include <iostream>
#include <iomanip>
using namespace std;
int area(float r,float pi=3.14)
{
	return (3.14*r*r);
}
int main()
{
	float r,Area;
	cout<<"Enter the radius of your circle : ";
	cin>>r;
	Area=area(r);
	cout<<"Area of enterd radius is : "<<Area;
    return 0;
}
