#include<iostream>
using namespace std;

class get{
	private:
		int num;
	public:
		get(int value){
			num=value;
		}		
		display()
		{
			cout<<"The value is passed to paramiterized constructor is ::"<<num;
		}
};
int main()
{
	get g(5);
	g.display();
	return 0;
}

