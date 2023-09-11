#include<iostream>
using namespace std;

struct student{
	char name[20];
	int std;
	float percentage;
}s1;
int main()
{
	cout<<"Enter your name     :";
	cin>>s1.name;
	cout<<"Enter your standard :";
	cin>>s1.std;
	cout<<"Enter your percentage :";
	cin>>s1.percentage;
	cout<<"Your name is       :"<<s1.name<<endl;
	cout<<"Your standard is   :"<<s1.std<<endl;
	cout<<"Your percentage is :"<<s1.percentage<<endl;
	return 0;
}
