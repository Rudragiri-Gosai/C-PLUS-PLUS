#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double kilometers;

    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    double centimeters = kilometers * 100000;
    double meters = kilometers * 1000;
    double inches = kilometers * 39370;
    double feet = kilometers * 3281;

    cout << setprecision(2)<<fixed<< "Results" <<endl<<endl;
    cout << "Kilometers   : " <<setfill('-')<< setw(10) << kilometers << endl;
    cout << "Centimeters  : " << setw(10) << centimeters << endl;
    cout << "Meters       : " << setw(10) << meters << endl;
    cout << "Inches       : " << setw(10) << inches << endl;
    cout << "Feet 	     : " <<  setw(10) << feet << endl;

    return 0;
}
