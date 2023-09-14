#include <iostream>
using namespace std;
class Max
{
private:
    float no1, no2;

public:
    void input_data()
    {
        cout << "Enter any Two numbers respectivly :";
        cin >> no1 >> no2;
        display(no1, no2);
    }
    void display(float x, float y)
    {
        cout << "The value of no1= " << x << " and no2= " << y << endl;
        largest(x, y);
    }
    void largest(float x, float y)
    {
        if (x > y)
        {
            cout << "No1 = " << x << " is Greater than No2 = " << y << endl;
        }
        else
        {
            cout << "No2 = " << y << " is Greater than No1 = " << x << endl;
        }
    }

} m1;
int main()
{
    m1.input_data();
    return 0;
}
