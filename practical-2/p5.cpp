#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x;
    cout << "Enter the value of x in points : ";
    cin >> x;
    cout << "Value of x is : " << setprecision(2) << x << endl;
    return 0;
}