#include <iostream>
using namespace std;
class Employee
{
public:
    static string e_name;
    static int e_ID;
    static void get_data()
    {
    	cout << "Enter your Employee ID:";
        cin >> e_ID;
        cout << "Enter your Employee name     :";
        cin.ignore();
        getline(cin,e_name);    
    }
    static void put_data()
    {
        cout << "Your Employee name :"<<e_name<< endl;
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
    }
    for (i = 0; i < 10; i++)
    {
        emp[i].put_data();
    }

    return 0;
}
