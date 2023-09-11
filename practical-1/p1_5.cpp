#include<iostream>
using namespace std;
int main()
{
    int n[5];
    cout<<"This program will print all negative number in array."<<endl;
    cout<<"Enter 5 positive/negative number : ";
    for (int i = 0; i < 5; i++)
    {
        cin>>n[i];
    }
    cout<<"All Negative Number in Array : ";
    for (int i = 0; i < 5; i++)
    {
        if(n[i]<0)
        {
             cout<<n[i]<<"\t";
        }
        else
        {

        }
        

    }
    return 0;
}
