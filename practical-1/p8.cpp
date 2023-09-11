#include <iostream>
#include <cmath>

using namespace std;

double compoundInterest(double principal, double rate, int time)
{
    double amount = principal * pow(1 + (rate / 100), time);
    return amount - principal;
}

int main()
{
    double principal, rate;
    int time;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (in percentage): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    double interest = compoundInterest(principal, rate, time);

    cout << "Compound Interest after " << time << " years: " << interest << endl;

    return 0;
}
