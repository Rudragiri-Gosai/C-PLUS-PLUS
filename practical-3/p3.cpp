#include<iostream> 
using namespace std; 
struct Employee
{ 
	char e_name[20];
	int e_code;
	float e_salary;
	char branch[20];
}e1; 
int main() 
{
	cout<<"Enter your Employee name     :";
	cin>>e1.e_name;
	cout<<"Enter your Employee code:";
	cin>>e1.e_code;
	cout<<"Enter your Employee Salary :";
	cin>>e1.e_salary;
	cout<<"Enter your Employee Branch :";
	cin>>e1.branch;
	cout<<"Your Employee name :"<<e1.e_name<<endl;
	cout<<"Your Employee code :"<<e1.e_code<<endl;
    cout<<"Your Employee Salary :"<<e1.e_salary<<endl;
	cout<<"Your Employee Branch :"<<e1.branch<<endl;
	return 0; 
} 

