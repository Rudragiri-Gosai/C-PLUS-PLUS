#include <iostream>
using namespace std;
void reverse(int ori)
{
	int temp, n, rev = 0;
	temp = ori;
	while (temp > 0)
	{
		n = temp % 10;
		rev = (rev * 10) + n;
		temp = temp / 10;
	};
	cout << "The reverse number is : " << rev << endl;
	if (rev == ori)
		cout << rev << " Number is palindrome.";
	else
		cout << rev << " Number is not palindrome.";
};
int main()
{
	int palin;
	cout << "This program will print given number is pliandrome or not." << endl;
	cout << "Enter any number : ";
	cin >> palin;
	reverse(palin);
	return 0;
}
