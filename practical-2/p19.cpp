
#include <iostream>
using namespace std;
int sum(int &n1, int &n2)
{
	cout << "Sum of two number :: " << (n1 + n2);
};
int main()
{
	int no1, no2;
	cout << "Enter first and second number : ";
	cin >> no1 >> no2;
	sum(no1, no2);
	return 0;
}
