#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream source("test.txt");
    ofstream destination_file("destination.txt");

    if (!source.is_open())
    {
        cout << "Failed to open the source file." << endl;
        return 1;
    }

    if (!destination_file.is_open())
    {
        cout << "Failed to open the destination file." << endl;
        return 1;
    }

    char ch;

    while (source.get(ch))
    {
        destination_file.put(ch);
    }

    source.close();
    destination_file.close();

    cout << "File copied successfully" << endl;

    return 0;
}
