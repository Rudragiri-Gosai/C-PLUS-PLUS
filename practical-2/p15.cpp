#include <iostream>
#include <iomanip>
using namespace std;
inline int square(int no1)
{
	return (no1*no1);
}
int main()
{
	int n1,result;
	cout << "Enter first number : ";
	cin >> n1;
	square(n1);

	return 0;
}
