#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char a[100];
    ifstream getl;
    getl.open("test.txt", ios::in);
    getl.getline(a, 30);
    cout << a << endl;

    getl.close();

    return 0;
}
