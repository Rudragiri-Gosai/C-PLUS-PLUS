#include <iostream>
#include <iomanip>
using namespace std;
inline void cube(int no1)
{
	cout<<"Cube of given number is : "<<no1*no1*no1;
}
int main()
{	
	int n1;
	cout<<"Enter first number : ";
	cin>>n1;
	cube(n1);
	
    return 0;
}
