#include<iostream>
using namespace std;

class parent1
{
	public:
		parent1()
	{
		cout<<"This is a base class of parent-1"<<endl;
	}
};
class parent2
{
	public:
		parent2()
	{
		cout<<"This is a base class of parent-2"<<endl;
	}
	
};
class child : public parent1,public parent2
{
	public:
		child()
	{
		cout<<"The base class is child :)"<<endl;
	}
};

 
int main()
{ 
	child obj;
	return 0;
}
