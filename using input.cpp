#include<iostream>
using namespace std;
void indian();
void foreign();
int main()
{
	int x ;
	cout<<"Press 1 : if you are indian"<<endl;
	cout<<"press 2 : if your are not indian"<<endl;
	cin>>x;
	if(x==1)
	{
	void indian();	
	}
	else if(x==2)
	{
	void foreign();
	}
	
	return 0;
	
	
}
void indian()
{
cout<<"your ticket is  Rs.50";	
}
void foreign()
{
	cout<<"your ticket is Rs.500";	
}