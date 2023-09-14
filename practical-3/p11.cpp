#include <iostream>
using namespace std;
class product
{
public:
    long int product_id, unit_price;
    string product_name;
    void get_data();
    void put_data();
} W;
void product::get_data()
{
    cout << "Enter your Product id     :";
    cin >> product_id;
    cout << "Enter your Product name   :";
    cin >> product_name;
    cout << "Enter your Unit/Product Price :";
    cin >> unit_price;
}
void product::put_data()
{
    cout << "Your product id is   : " << product_id << endl;
    cout << "Your product name is : " << product_name << endl;
    cout << "Your Unit/product Price is : " << unit_price << endl;
}
int main()
{
    product W1, W2;
    W1.get_data();
    W1.put_data();
    W2.get_data();
    W2.put_data();
    return 0;
}
