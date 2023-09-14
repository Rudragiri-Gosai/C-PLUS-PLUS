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

// getdata() function outside the class item
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

    // Call getdata() function
    getdata(obj);

    // Call displaydata() function
    obj.displaydata();

    return 0;
}
