#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Value of a is  :  " << setfill('0') << setw(5) << a << endl;
    return 0;
}