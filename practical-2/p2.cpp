#include <iostream>
using namespace std;
class temp
{
public:
    static int a;
     void display()
     {
     	cout<<"Value of a is : "<<a<<endl;
	 }
};
int temp::a = 10;
int main()
{
	temp t;
	t.display;
    return 0;
}
