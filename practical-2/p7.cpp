#include <iostream>
using namespace std;

int main()
{
    enum
    {
        f,
        t
    };
    cout << "And gate using Enum : " << endl;
    cout << "A B Y" << endl;
    cout << "-----" << endl;
    cout << f << " " << f << " " << f * f << endl;
    cout << f << " " << t << " " << f * t << endl;
    cout << t << " " << f << " " << t * f << endl;
    cout << t << " " << t << " " << t * t << endl;

    return 0;
}
