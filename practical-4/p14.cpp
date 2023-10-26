#include <iostream>
using namespace std;

// Define a class called 'MyClass' with a destructor
class MyClass
{
	public:
    	// Constructor
    	MyClass()
		{
        	cout << "Object created" << endl;
    	}

    	// Destructor
    	~MyClass()
		{
        	cout << "Object destroyed" << endl;
    	}
};

int main() 
{
    // Create an object of 'MyClass'
    MyClass obj1;

    {
        // Create another object of 'MyClass' within a block
        MyClass obj2;
    } // 'obj2' goes out of scope and is destroyed here

    // 'obj1' goes out of scope and is destroyed here

    return 0;
}

