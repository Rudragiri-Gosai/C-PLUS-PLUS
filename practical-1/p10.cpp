#include<iostream>
using namespace std;
int main(){
	float n1,n2,n3;
	cout<<"This program will print lager number between three number."<<endl;
	cout<<"Enter the first number : ";
	cin>>n1;
	cout<<"Enter the second number : ";
	cin>>n2;
	cout<<"Enter the thrid number : ";
	cin>>n3;
	if(n1>n2 && n1>n3)
		cout<<"First Number "<<n1<<" is Larger.";
	else if(n2>n1 && n2>n3)
		cout<<"Second Number "<<n2<<" is Larger.";
	else
		cout<<"Third Number "<<n3<<" is Larger.";
    return 0;
}
