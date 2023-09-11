#include <iostream>
using namespace std;
class account
{
public:
    long long int a_no, b_code;
    double a_balance;
    void get_data();
    void put_data();
};
void account::get_data()
{
    cout << "Enter your account Number    :";
    cin >> a_no;
    cout << "Enter your Branch code      :";
    cin >> b_code;
    cout << "Enter your Balance          :";
    cin >> a_balance;
}
void account::put_data()
{
    cout << "Your account Number  :" << a_no << endl;
    cout << "Your Branch code     :" << b_code << endl;
    cout << "Your account Balance :" << a_balance << endl;
}
int main()
{
    account a1;
    a1.get_data();
    a1.put_data();
    return 0;
}
