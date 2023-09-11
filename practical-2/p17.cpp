
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    double doublenum1, doublenum2;
    cout << "Enter any two integer value " << endl;
    cin>>num1>>num2;
    cout << "The sum of given Number is ::" << add(num1, num2) << endl;
    cout << "Enter any two float value " << endl;
    cin>>doublenum1>>doublenum2;
	cout << "The sum of given Number is ::" << add(doublenum1, doublenum2) << endl;
    

    return 0;
}
