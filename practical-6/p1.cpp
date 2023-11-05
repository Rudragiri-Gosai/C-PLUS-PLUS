#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outputFile("test.txt");

    if (!outputFile.is_open())
    {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    outputFile << "This line is from test.txt";
    outputFile.close();

    cout << "Data has been written to test.txt" << endl;

    return 0;
}
