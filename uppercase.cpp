#include<iostream>
using namespace std;
int main()
{
int time ,num;
cout<<"How many time you want to press the key:";
cin>>time;
for(int i=0;i<time;i++)
{
	cin>>num;
	if(num%2==0)
	{
		cout<<"It is even";
	}
	else
	{
		cout<<"Sorry ,it is not even";
		break;
	}
}
return 0;
}