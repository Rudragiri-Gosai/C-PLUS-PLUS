#include<iostream>
using namespace std;
int main()
{
	int l,b;
	cout<<"This program will print area and perimeter of rectangle."<<endl;
	cout<<"Enter length of rectangle : ";
	cin>>l;
	cout<<"Enter breadth of rectangle : ";
	cin>>b;
	cout<<"The Area of your rectangle is : "<<l*b<<endl;
	cout<<"The Perimeter of your rectangle is : "<<2*(l+b)<<endl;
	return 0;
}
