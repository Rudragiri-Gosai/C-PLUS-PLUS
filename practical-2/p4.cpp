#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 10;
    cout << "Value of a is  :  " << setfill('0') << setw(5) << a << endl;
    return 0;
}