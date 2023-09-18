#include <iostream>

using namespace std;

class item
{
public:
    int number;
    float cost;

    void displaydata()
    {
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }
};

void getdata(item &obj)
{
    cout << "Enter number: ";
    cin >> obj.number;
    cout << "Enter cost: ";
    cin >> obj.cost;
}

int main()
{
    item obj;

    getdata(obj);

    obj.displaydata();

    return 0;
}
