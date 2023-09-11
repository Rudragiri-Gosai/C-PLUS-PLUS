#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"This program will print the nnumber is Positive or Negative"<<endl;
    cout<<"Enter any Positive or negative number : ";
    cin>>num;
   
    if(num>0)
    	cout<<"Given number is Positive: "<<num;
    else
    	cout<<"Given number is Negative: "<<num;
    return 0;
}
