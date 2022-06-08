#include<iostream>
using namespace std;
struct rohit{
	int a;
	double b;
};
int main()
{
	struct rohit r1;
	cout<<r1.a<<endl;
	cout<<r1.b<<endl;
	cout<<sizeof(rohit);
	cout<<sizeof(r1.a);
	cout<<sizeof(r1.b);
	return 0;
}