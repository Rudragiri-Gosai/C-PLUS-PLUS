#include <iostream>
using namespace std;
void sum(int n)
{
	int sum = 0, i;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	cout << "Sum of all natural number is : " << sum;
};
int main()
{

	int num;
	cout << "This program will print sum of 1 to n natural number." << endl;
	cout << "Enter the last number : ";
	cin >> num;
	sum(num);
	return 0;
}
