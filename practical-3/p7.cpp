#include <iostream>
using namespace std;
class Employee
{
public:
    string e_name, branch;
    long long int e_code;
    float e_salary;
    void get_data();
    void put_data();
};
void Employee::get_data()
{
    cout << "Enter your Employee name     :";
    cin >> e_name;
    cout << "Enter your Employee code:";
    cin >> e_code;
    cout << "Enter your Employee Salary :";
    cin >> e_salary;
    cout << "Enter your Employee Branch :";
    cin >> branch;
}
void Employee::put_data()
{
    cout << "Your Employee name :" << e_name << endl;
    cout << "Your Employee code :" << e_code << endl;
    cout << "Your Employee Salary :" << e_salary << endl;
    cout << "Your Employee Branch :" << branch << endl;
}
int main()
{
    Employee e1;
    e1.get_data();
    e1.put_data();
    return 0;
}
