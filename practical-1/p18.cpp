#include <iostream>

using namespace std;
void pc(int n)
{
    cout << "THe power of entered number is : " << n * n;
}
int main()
{
    int num;
    cout << "Enter the number which power you want : ";
    cin >> num;
    pc(num);
    return 0;
}
