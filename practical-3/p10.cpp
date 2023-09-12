#include <iostream>
using namespace std;
class result
{
private:
    float no1, no2, no3;

public:
    void getdata()
    {
        cout << "Enter any three numbers respectivly :";
        cin >> no1 >> no2 >> no3;
    }
    void anwser()
    {
        if (no1 > no2)
        {
            if (no1 > no3)
            {
                cout << "No1 is largest : " << no1;
            }
        }
        else if (no2 > no3)
        {
            cout << "No2 is largest : " << no2;
        }
        else
        {
            cout << "No3 is largest : " << no3;
        }
    }

} r1;
int main()
{
    r1.getdata();
    r1.anwser();
    return 0;
}
