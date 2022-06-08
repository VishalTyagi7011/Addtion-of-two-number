#include<iostream>
using namespace std;
struct student{
	char name[100];
	int roll;
	float cgpa;
	int  getcgpa(int n)
	{
		cout<<"hello world"<<n;
	}
};
int main()
{ int a =10;
	struct student stu;
	stu.name;
	stu.getcgpa(a);
	return 0;
}