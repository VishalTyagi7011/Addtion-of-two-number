#include<iostream>
using namespace std;
class human{
	public:
		int height;
		int age;
		int weight;
	
		
	public:
		int getage(int n)
		{
			cout<<n;
		}
		
};
class male:public human{
	public:
		int color;
	
};
int main()
{
	int a=12;

	male object;
	object.age;
	cout<<object.age<<endl;
	cout<<object.weight<<endl;
	cout<<object.height<<endl;
	cout<<object.color;
	object.getage(a);
	return 0;
	
}








