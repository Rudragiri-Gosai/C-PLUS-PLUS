#include <iostream>
using namespace std;
class student
{
private:
	string s_name;
	int s_age;

public:
	void get_data()
	{
		cout << "Enter your Good name :";
		cin >> s_name;
		cout << "Enter your Age :";
		cin >> s_age;
	}
	void put_data()
	{
		cout << "Your Good name is ::" << s_name << endl;
		cout << "Your Age is       ::" << s_age << endl;
	}
} s1;
int main()
{
	s1.get_data();
	s1.put_data();
	return 0;
}
