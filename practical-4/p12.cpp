#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}

    MyClass(const MyClass& other) {
        data = other.data;
        std::cout << "Copy constructor called" << std::endl;
    }

    void displayData() {
        std::cout << "Data in MyClass: " << data << std::endl;
    }
};

int main() {
   
    MyClass original(42);

    MyClass copied= original;

    original.displayData();
    copied.displayData();

    return 0;
}

