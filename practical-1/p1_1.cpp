#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"This program will print sum and average of two number."<<endl;
	cout<<"Enter the first number ::";
	cin>>a;
	cout<<"Enter the second number ::";
	cin>>b;
	int sum =a+b;
	cout<<"The sum of given number is : "<<sum<<endl;
	float avg=(float)sum/2;
	cout<<"The average of given number is : "<<avg;
	return 0;
}
