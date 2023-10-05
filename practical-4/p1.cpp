#include <iostream>
using namespace std;
class Employee
{
public:
    string e_name;
    int e_ID;
    void get_data()
    {
        cout << "Enter your Employee ID:";
        cin >> e_ID;
        cout << "Enter your Employee name     :";
        cin.ignore();
        getline(cin, e_name);
    }
    void put_data()
    {
        cout << "Your Employee name :" << e_name << endl;
        cout << "Your Employee ID :" << e_ID << endl;
    }
};

int main()
{
    Employee emp[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        emp[i].get_data();
        // emp[i].put_data();
    }
    for (i = 0; i < 2; i++)
    {
        emp[i].put_data();
    }

    return 0;
}
