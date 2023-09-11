#include<iostream>
using namespace std;

void swap(int& a,int& b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"This program will print swap number."<<endl;
    cout<<"Enter the first And Second number respectivly : ";
    cin>>a>>b;
    cout<<"Value before swaping :: "<<endl;
    cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
    swap(a,b);
    cout<<"Value After swaping :: "<<endl;
    cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
    return 0;
}

