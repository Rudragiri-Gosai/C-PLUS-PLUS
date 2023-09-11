#include <iostream>
using namespace std;
int hello(int &n1,int &n2)
{
    return (n1+n2);
};
int main()
{
	int n1,n2,result;
	cout<<"Enter the value of First number : ";
	cin>>n1;
	cout<<"Enter the value of second number : ";
	cin>>n2;
    result=hello(n1,n2);
    cout<<"Sum of entered number is : "<<result;
    return 0;
}
