#include<iostream>
using namespace std;
int main(){
    int num,mul=0,i;
    cout<<"This program will print nultiplication table of given number."<<endl;
    cout<<"Enter the number : ";
    cin>>num;
    for(i=1;i<=10;i++)
    {
    	mul=num*i;
    	cout<<num<<" * "<<i<<" = "<<mul<<endl;
	}
    return 0;
}
