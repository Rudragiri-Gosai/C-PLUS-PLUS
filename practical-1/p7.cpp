#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"This program will print simple intrest of your given values."<<endl;
    cout<<"Enter your Principal : ";
    cin>>p;
    cout<<"Enter your Rate: ";
    cin>>r;
    cout<<"Enter your time peroid : ";
    cin>>t;
    cout<<"Your simple intrest is : "<<(p*r*t)/100;
    return 0;
}
