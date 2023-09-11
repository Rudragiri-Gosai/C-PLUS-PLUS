#include <iostream>
using namespace std;
class temp
{
public:
    static int a, b;
};
int temp::a;
int temp::b;
int main()
{
    int a, b;
    cout << "Enter value of a : ";
    cin >> temp::a;

    cout << "Enter value of b : ";
    cin >> temp::b;

    cout << "Value of a is : " << temp::a << endl;
    cout << " Vlaue of b is : " << temp::b << endl;
    cout << "Sum of a and b is : " << temp::a + temp::b << endl;
    return 0;
}
