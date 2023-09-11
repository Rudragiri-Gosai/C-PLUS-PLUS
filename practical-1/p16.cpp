#include <iostream>

using namespace std;

void armstrong(int ori)
{
	int temp,n,rev=0;
	temp=ori;
	while(temp>0)
	{
		n=temp%10;
		rev=rev+n*n*n;
		temp=temp/10;
	};
	if(rev==ori)
		cout<<ori<<" Number is Armstrong";
	else
		cout<<ori<<" Number is not Armstrong.";
};
int main(){
   	int palin;
   	cout<<"This program will print given number is Armstrong or not."<<endl;
   	cout<<"Enter any number : ";
   	cin>>palin;
   	armstrong(palin);    
    return 0;
}

