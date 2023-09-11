#include<iostream>

using namespace std;
void fibonacci(int n1,int end)
{
    int i,n2=1,next_term;
    cout<<"Fibonacci Series :: ";
    for ( i = 0; i <= end; ++i)
    {
        cout<<" "<<n1<<" ";
        next_term=n1+n2;
        n1=n2;
        n2=next_term;
    }
    
}
int main()
{   int i=0,end;
    cout<<"How long you want to print Fibonacci Series : ";
    cin>>end;
    fibonacci(i,end);
    return 0;
}
