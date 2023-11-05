#include<iostream>
using namespace std;

class base
{
	public:
		virtual void print()
		{
			cout<<"Print base class"<<endl;
		}
		void show()
		{
			cout<<"Show  base Class"<<endl;
		}
};

class derived : public base
{
	public:
		virtual void print()
		{
			cout<<"Print Derived class"<<endl;
		}
		void show()
		{
			cout<<"Show  Derived Class"<<endl;
		}
		
};
int main()
{
	base *b;
	derived d;
	b=&d;
	b->print();
	b->show();
	return 0;
}
