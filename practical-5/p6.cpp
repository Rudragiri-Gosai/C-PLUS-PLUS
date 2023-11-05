#include<iostream>
using namespace std;

class animal
{
	public:
		void eat()
		{
			cout<<"Eating...:)"<<endl;
		}
};
class dog : public animal
{
	public:
		void eat()
		{
			cout<<"Dog Eating Bread...:)"<<endl;
		}
		
};
int main()
{
	dog d=dog();
	d.eat();
	return 0;
}
