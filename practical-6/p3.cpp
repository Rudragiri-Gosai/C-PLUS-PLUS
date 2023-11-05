#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream count("test.txt");

    if (!count.is_open())
    {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    char ch;
    int count_ch = 0;
    while (count.get(ch))
    {
        count_ch++;
    }

    count.close();

    cout << "Number of character in text.txt is ::" << count_ch << endl;

    return 0;
}
