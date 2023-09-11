#include <iostream>
using namespace std;
class shape
{
public:
	char e_name[]
    void get_data();
    void put_data();
};
void shape::get_data()
{
	cout<<"Enter your Employee name     :";
	cin>>e_name;
	cout<<"Enter your Employee code:";
	cin>>e_code;
	cout<<"Enter your Employee Salary :";
	cin>>e_salary;
	cout<<"Enter your Employee Branch :";
	cin>>branch;
}
void shape::put_data()
{
	cout<<"Height of your shape is "<<height<<" in meter."<<endl;
	cout<<"Base of your shape is "<<base<<" in meter."<<endl;
}
int main()
{
  	shape s1;
	s1.get_data();
	s1.put_data();	  
    return 0;
}
