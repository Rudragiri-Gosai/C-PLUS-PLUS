#include <iostream>
using namespace std;
class Employee
{
public:
    string e_name;
    long int e_ID;
    void get_data()
    {
        cout << "Enter your Employee name     :";
        cin >> e_name;
        cout << "Enter your Employee ID:";
        cin >> e_ID;
    }
    void put_data()
    {
        cout << "Your Employee name :" << e_name << endl;
        cout << "Your Employee ID :" << e_ID << endl;
    }
};

int main()
{
    Employee emp[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        emp[i].get_data();
        emp[i].put_data();
    }

    return 0;
}
