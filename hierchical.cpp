#include<iostream>
using namespace std;
class father{
	public:
		char name[100];
		int age;
		int height ;
		void fathers()
		{
			cout<<"father hardworking";
		}
};
class son: public father
{
	public:
		char graduation[6];
		char company[9];
		int salary;
		void sons()
		{cout<<"son enjoy";
		}
};
class daughter:public father{
	public:
		char school[19];
		char branch[12];
		int roll;
		void daughters()
		{cout<<"girl study";
		}
};
int main()
{
	father obj1;
	obj1.age;
	son obj2;
	obj2.salary;
	daughter obj3;
	obj3.roll;
	return 0;
}
		
		
		
		
		
		
		
		
		