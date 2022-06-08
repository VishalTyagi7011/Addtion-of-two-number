#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number:";
	cin>>num;
	switch(num)
	{
		case 1:
			cout<<"it is sunday";
			break;
		case 2:
			cout<<"it is monday";
			break;
		case 3:
			cout<<"it is tuesday";
			break;
		default:
			cout<<"wrong input";
			break;
	}
	return 0;
}