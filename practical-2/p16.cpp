#include<iostream>

using namespace std;
int area(int s)
{
	return(s*s);
}
int area(float r)
{
	return(float)(3.14*r*r);
}
int area(int l,int b)
{
	return(l*b);
}
int main()
{
	int	l,b,s;
	float r;
	cout<<"Enter the length of reactangle :";
	cin>>l;
	cout<<"Enter the breadth of reactangle :";
	cin>>b;
	cout<<"Area of your reactangle is :: "<<area(l,b)<<endl;
	
	cout<<"Enter the length of Square :";
	cin>>s;
	cout<<"Area of your reactangle is :: "<<area(s)<<endl;
	
	cout<<"Enter the radius of circle";
	cin>>r;
	cout<<"Area of the Circle is : "<<area(r)<<endl;
	return 0;
}
