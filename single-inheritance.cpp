#include<iostream>
using namespace std;
class animal{
	public:
		string color;
		int weight;
		int height;
		string habit;
		void speak()
		{ cout<<"speaking";
		}
};
class dog: public animal{
	public:
		int teeth;
};
int main()
{
	dog object;
	cout<<object.weight<<endl;
	cout<<object.height<<endl;
	cout<<object.teeth<<endl;
	object.speak();
	return 0;
	
}
