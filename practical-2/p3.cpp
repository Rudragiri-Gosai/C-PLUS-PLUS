#include <iostream>
using namespace std;
class temp
{
public:
    void print();
};
void temp::print()
{
    cout << "Hello world!" << endl;
}
int main()
{
    temp t;
    t.print();
    return 0;
}
