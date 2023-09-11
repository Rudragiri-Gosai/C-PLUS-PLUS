#include <iostream>
using namespace std;
int a = 10;
int main()
{
    int a = 20;
    cout << "Use of Scope Resolution Operator without class." << endl;
    cout << "Value in Global variable : " << ::a << endl;
    cout << "Value in local variable : " << a << endl;
    return 0;
}
